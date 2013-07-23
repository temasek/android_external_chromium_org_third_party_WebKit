/*
 * Copyright (C) 2008, 2010 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "core/page/Location.h"

#include "core/dom/Document.h"
#include "core/dom/ExceptionCode.h"
#include "core/loader/FrameLoader.h"
#include "core/page/DOMWindow.h"
#include "core/page/Frame.h"
#include "weborigin/KURL.h"
#include "weborigin/SecurityOrigin.h"

namespace WebCore {

Location::Location(Frame* frame)
    : DOMWindowProperty(frame)
{
    ScriptWrappable::init(this);
}

inline const KURL& Location::url() const
{
    ASSERT(m_frame);

    const KURL& url = m_frame->document()->url();
    if (!url.isValid())
        return blankURL(); // Use "about:blank" while the page is still loading (before we have a frame).

    return url;
}

String Location::href() const
{
    if (!m_frame)
        return String();

    return url().string();
}

String Location::protocol() const
{
    if (!m_frame)
        return String();

    return url().protocol() + ":";
}

String Location::host() const
{
    if (!m_frame)
        return String();

    // Note: this is the IE spec. The NS spec swaps the two, it says
    // "The hostname property is the concatenation of the host and port properties, separated by a colon."
    const KURL& url = this->url();
    return url.hasPort() ? url.host() + ":" + String::number(url.port()) : url.host();
}

String Location::hostname() const
{
    if (!m_frame)
        return String();

    return url().host();
}

String Location::port() const
{
    if (!m_frame)
        return String();

    const KURL& url = this->url();
    return url.hasPort() ? String::number(url.port()) : "";
}

String Location::pathname() const
{
    if (!m_frame)
        return String();

    const KURL& url = this->url();
    return url.path().isEmpty() ? "/" : url.path();
}

String Location::search() const
{
    if (!m_frame)
        return String();

    const KURL& url = this->url();
    return url.query().isEmpty() ? emptyString() : "?" + url.query();
}

String Location::origin() const
{
    if (!m_frame)
        return String();
    return SecurityOrigin::create(url())->toString();
}

PassRefPtr<DOMStringList> Location::ancestorOrigins() const
{
    RefPtr<DOMStringList> origins = DOMStringList::create();
    if (!m_frame)
        return origins.release();
    for (Frame* frame = m_frame->tree()->parent(); frame; frame = frame->tree()->parent())
        origins->append(frame->document()->securityOrigin()->toString());
    return origins.release();
}

String Location::hash() const
{
    if (!m_frame)
        return String();

    const String& fragmentIdentifier = url().fragmentIdentifier();
    return fragmentIdentifier.isEmpty() ? emptyString() : "#" + fragmentIdentifier;
}

void Location::setHref(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& url)
{
    if (!m_frame)
        return;
    setLocation(url, activeWindow, firstWindow);
}

void Location::setProtocol(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& protocol, ExceptionCode& ec)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    if (!url.setProtocol(protocol)) {
        ec = SyntaxError;
        return;
    }
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setHost(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& host)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    url.setHostAndPort(host);
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setHostname(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& hostname)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    url.setHost(hostname);
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setPort(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& portString)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    int port = portString.toInt();
    if (port < 0 || port > 0xFFFF || portString.isEmpty())
        url.removePort();
    else
        url.setPort(port);
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setPathname(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& pathname)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    url.setPath(pathname);
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setSearch(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& search)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    url.setQuery(search);
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::setHash(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& hash)
{
    if (!m_frame)
        return;
    KURL url = m_frame->document()->url();
    String oldFragmentIdentifier = url.fragmentIdentifier();
    String newFragmentIdentifier = hash;
    if (hash[0] == '#')
        newFragmentIdentifier = hash.substring(1);
    url.setFragmentIdentifier(newFragmentIdentifier);
    // Note that by parsing the URL and *then* comparing fragments, we are 
    // comparing fragments post-canonicalization, and so this handles the 
    // cases where fragment identifiers are ignored or invalid. 
    if (equalIgnoringNullity(oldFragmentIdentifier, url.fragmentIdentifier()))
        return;
    setLocation(url.string(), activeWindow, firstWindow);
}

void Location::assign(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& url)
{
    if (!m_frame)
        return;
    setLocation(url, activeWindow, firstWindow);
}

void Location::replace(DOMWindow* activeWindow, DOMWindow* firstWindow, const String& url)
{
    if (!m_frame)
        return;
    // Note: We call DOMWindow::setLocation directly here because replace() always operates on the current frame.
    m_frame->domWindow()->setLocation(url, activeWindow, firstWindow, LockHistoryAndBackForwardList);
}

void Location::reload(DOMWindow* activeWindow)
{
    if (!m_frame)
        return;
    if (protocolIsJavaScript(m_frame->document()->url()))
        return;
    m_frame->navigationScheduler()->scheduleRefresh();
}

void Location::setLocation(const String& url, DOMWindow* activeWindow, DOMWindow* firstWindow)
{
    ASSERT(m_frame);
    // We call findFrameForNavigation to handle the case of a seamless iframe correctly.
    Frame* frame = m_frame->loader()->findFrameForNavigation(String(), activeWindow->document());
    if (!frame)
        return;
    frame->domWindow()->setLocation(url, activeWindow, firstWindow);
}

} // namespace WebCore

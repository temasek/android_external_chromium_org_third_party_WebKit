/*
 * Copyright (C) 2014 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "modules/crypto/HmacKeyAlgorithm.h"

#include "modules/crypto/NormalizeAlgorithm.h"
#include "wtf/text/WTFString.h"

namespace WebCore {

PassRefPtrWillBeRawPtr<HmacKeyAlgorithm> HmacKeyAlgorithm::create(const blink::WebCryptoKeyAlgorithm& algorithm)
{
    return adoptRefWillBeNoop(new HmacKeyAlgorithm(algorithm));
}

KeyAlgorithm* HmacKeyAlgorithm::hash()
{
    if (!m_hash)
        m_hash = KeyAlgorithm::createHash(m_algorithm.hmacParams()->hash());
    return m_hash.get();
}

unsigned HmacKeyAlgorithm::length()
{
    return m_algorithm.hmacParams()->lengthBits();
}

void HmacKeyAlgorithm::trace(Visitor* visitor)
{
    KeyAlgorithm::trace(visitor);
    visitor->trace(m_hash);
}

HmacKeyAlgorithm::HmacKeyAlgorithm(const blink::WebCryptoKeyAlgorithm& algorithm)
    : KeyAlgorithm(algorithm)
{
    ScriptWrappable::init(this);
}

} // namespace WebCore

{# http://www.chromium.org/blink/coding-style#TOC-License #}
/*
 * Copyright (C) 2013 Google Inc. All rights reserved.
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

{# FIXME: Rename to Python when switch #}
// This file has been auto-generated by code_generator_v8.pm. DO NOT MODIFY!

#ifndef {{v8_class}}_h
#define {{v8_class}}_h

{% filter conditional(conditional_string) %}
{% for filename in header_includes %}
#include "{{filename}}"
{% endfor %}

namespace WebCore {

class ExecutionContext;

class {{v8_class}} FINAL : public {{cpp_class}}, public ActiveDOMCallback {
public:
    static PassOwnPtr<{{v8_class}}> create(v8::Handle<v8::Function> callback, ExecutionContext* context)
    {
        ASSERT(context);
        return adoptPtr(new {{v8_class}}(callback, context));
    }

    virtual ~{{v8_class}}();

{% for method in methods %}
    virtual {{method.cpp_type}} {{method.name}}({{method.argument_declarations | join(', ')}}) OVERRIDE;
{% endfor %}
private:
    {{v8_class}}(v8::Handle<v8::Function>, ExecutionContext*);

    v8::Isolate* m_isolate;
    ScopedPersistent<v8::Function> m_callback;
    RefPtr<DOMWrapperWorld> m_world;
};

}
{% endfilter %}
#endif // {{v8_class}}_h

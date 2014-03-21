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

// This file has been auto-generated by code_generator_v8.pm. DO NOT MODIFY!

#include "config.h"
#include "V8TestSpecialOperationsIdentifierRaisesException.h"

#include "RuntimeEnabledFeatures.h"
#include "V8TestInterfaceEmpty.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(TestSpecialOperationsIdentifierRaisesException* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::setTypeInfoInObject(object, &V8TestSpecialOperationsIdentifierRaisesException::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

// In ScriptWrappable::init, the use of a local function declaration has an issue on Windows:
// the local declaration does not pick up the surrounding namespace. Therefore, we provide this function
// in the global namespace.
// (More info on the MSVC bug here: http://connect.microsoft.com/VisualStudio/feedback/details/664619/the-namespace-of-local-function-declarations-in-c)
void webCoreInitializeScriptWrappableForInterface(WebCore::TestSpecialOperationsIdentifierRaisesException* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8TestSpecialOperationsIdentifierRaisesException::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestSpecialOperationsIdentifierRaisesException::domTemplate, V8TestSpecialOperationsIdentifierRaisesException::derefObject, 0, 0, 0, V8TestSpecialOperationsIdentifierRaisesException::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, false };

namespace TestSpecialOperationsIdentifierRaisesExceptionV8Internal {

template <typename T> void V8_USE(T) { }

static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "item", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_EXCEPTION_VOID(unsigned, index, toUInt32(info[0], exceptionState), exceptionState);
    RefPtr<TestInterfaceEmpty> result = impl->item(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValue(info, result.release());
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::itemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setItem", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_EXCEPTION_VOID(unsigned, index, toUInt32(info[0], exceptionState), exceptionState);
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, value, info[1]);
    String result = impl->setItem(index, value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void setItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::setItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void deleteItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteItem", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_EXCEPTION_VOID(unsigned, index, toUInt32(info[0], exceptionState), exceptionState);
    bool result = impl->deleteItem(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValueBool(info, result);
}

static void deleteItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::deleteItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "namedItem", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, name, info[0]);
    RefPtr<TestInterfaceEmpty> result = impl->namedItem(name, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValue(info, result.release());
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setNamedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setNamedItem", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, name, info[0]);
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, value, info[1]);
    String result = impl->setNamedItem(name, value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void setNamedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::setNamedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void deleteNamedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteNamedItem", "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, name, info[0]);
    bool result = impl->deleteNamedItem(name, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8SetReturnValueBool(info, result);
}

static void deleteNamedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::deleteNamedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedGetterContext, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    RefPtr<TestInterfaceEmpty> result = impl->item(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> jsValue, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, propertyValue, jsValue);
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    bool result = impl->setItem(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, jsValue);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> jsValue, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertySetter(index, jsValue, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertyDeleter(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedDeletionContext, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    DeleteResult result = impl->deleteItem(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result != DeleteUnknownProperty)
        return v8SetReturnValueBool(info, result == DeleteSuccess);
}

static void indexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertyDeleter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    if (info.Holder()->HasRealNamedProperty(name))
        return;
    if (!info.Holder()->GetRealNamedPropertyInPrototypeChain(name).IsEmpty())
        return;

    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name);
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    RefPtr<TestInterfaceEmpty> result = impl->namedItem(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void namedPropertyGetterCallback(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertySetter(v8::Local<v8::String> name, v8::Local<v8::Value> jsValue, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    if (info.Holder()->HasRealNamedProperty(name))
        return;
    if (!info.Holder()->GetRealNamedPropertyInPrototypeChain(name).IsEmpty())
        return;

    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, propertyName, name);
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, propertyValue, jsValue);
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::SetterContext, *namedProperty, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    bool result = impl->setNamedItem(propertyName, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, jsValue);
}

static void namedPropertySetterCallback(v8::Local<v8::String> name, v8::Local<v8::Value> jsValue, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertySetter(name, jsValue, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name);
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyDeleter(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name);
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::DeletionContext, *namedProperty, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    DeleteResult result = impl->deleteNamedItem(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result != DeleteUnknownProperty)
        return v8SetReturnValueBool(info, result == DeleteSuccess);
}

static void namedPropertyDeleterCallback(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyDeleter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TestSpecialOperationsIdentifierRaisesException* impl = V8TestSpecialOperationsIdentifierRaisesException::toNative(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "TestSpecialOperationsIdentifierRaisesException", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Handle<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i)
        v8names->Set(v8::Integer::New(info.GetIsolate(), i), v8String(info.GetIsolate(), names[i]));
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace TestSpecialOperationsIdentifierRaisesExceptionV8Internal

static const V8DOMConfiguration::MethodConfiguration V8TestSpecialOperationsIdentifierRaisesExceptionMethods[] = {
    {"item", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::itemMethodCallback, 0, 1},
    {"setItem", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::setItemMethodCallback, 0, 2},
    {"deleteItem", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::deleteItemMethodCallback, 0, 1},
    {"namedItem", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedItemMethodCallback, 0, 1},
    {"setNamedItem", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::setNamedItemMethodCallback, 0, 2},
    {"deleteNamedItem", TestSpecialOperationsIdentifierRaisesExceptionV8Internal::deleteNamedItemMethodCallback, 0, 1},
};

static void configureV8TestSpecialOperationsIdentifierRaisesExceptionTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "TestSpecialOperationsIdentifierRaisesException", v8::Local<v8::FunctionTemplate>(), V8TestSpecialOperationsIdentifierRaisesException::internalFieldCount,
        0, 0,
        0, 0,
        V8TestSpecialOperationsIdentifierRaisesExceptionMethods, WTF_ARRAY_LENGTH(V8TestSpecialOperationsIdentifierRaisesExceptionMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> ALLOW_UNUSED instanceTemplate = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> ALLOW_UNUSED prototypeTemplate = functionTemplate->PrototypeTemplate();
    functionTemplate->InstanceTemplate()->SetIndexedPropertyHandler(TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertyGetterCallback, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertySetterCallback, 0, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::indexedPropertyDeleterCallback, indexedPropertyEnumerator<TestSpecialOperationsIdentifierRaisesException>);
    functionTemplate->InstanceTemplate()->SetNamedPropertyHandler(TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyGetterCallback, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertySetterCallback, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyQueryCallback, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyDeleterCallback, TestSpecialOperationsIdentifierRaisesExceptionV8Internal::namedPropertyEnumeratorCallback);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::current()->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8TestSpecialOperationsIdentifierRaisesException::domTemplate(v8::Isolate* isolate)
{
    V8PerIsolateData* data = V8PerIsolateData::from(isolate);
    v8::Local<v8::FunctionTemplate> result = data->existingDOMTemplate(const_cast<WrapperTypeInfo*>(&wrapperTypeInfo));
    if (!result.IsEmpty())
        return result;

    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "BuildDOMTemplate");
    result = v8::FunctionTemplate::New(isolate, V8ObjectConstructor::isValidConstructorMode);
    configureV8TestSpecialOperationsIdentifierRaisesExceptionTemplate(result, isolate);
    data->setDOMTemplate(const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), result);
    return result;
}

bool V8TestSpecialOperationsIdentifierRaisesException::hasInstance(v8::Handle<v8::Value> jsValue, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, jsValue);
}

v8::Handle<v8::Object> V8TestSpecialOperationsIdentifierRaisesException::findInstanceInPrototypeChain(v8::Handle<v8::Value> jsValue, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, jsValue);
}

TestSpecialOperationsIdentifierRaisesException* V8TestSpecialOperationsIdentifierRaisesException::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> V8TestSpecialOperationsIdentifierRaisesException::createWrapper(PassRefPtr<TestSpecialOperationsIdentifierRaisesException> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8TestSpecialOperationsIdentifierRaisesException>(impl.get(), isolate));
    if (ScriptWrappable::wrapperCanBeStoredInObject(impl.get())) {
        const WrapperTypeInfo* actualInfo = ScriptWrappable::getTypeInfoFromObject(impl.get());
        // Might be a XXXConstructor::wrapperTypeInfo instead of an XXX::wrapperTypeInfo. These will both have
        // the same object de-ref functions, though, so use that as the basis of the check.
        RELEASE_ASSERT_WITH_SECURITY_IMPLICATION(actualInfo->derefObjectFunction == wrapperTypeInfo.derefObjectFunction);
    }

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &wrapperTypeInfo, toInternalPointer(impl.get()), isolate);
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextEnabledProperties(wrapper, impl.get(), isolate);
    V8DOMWrapper::associateObjectWithWrapper<V8TestSpecialOperationsIdentifierRaisesException>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8TestSpecialOperationsIdentifierRaisesException::derefObject(void* object)
{
    fromInternalPointer(object)->deref();
}

template<>
v8::Handle<v8::Value> toV8NoInline(TestSpecialOperationsIdentifierRaisesException* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore

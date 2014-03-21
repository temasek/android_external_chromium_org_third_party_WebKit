/*
 * Copyright (C) 2013 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AbstractSQLTransactionBackend_h
#define AbstractSQLTransactionBackend_h

#include "heap/Handle.h"
#include "modules/webdatabase/sqlite/SQLValue.h"
#include "modules/webdatabase/AbstractSQLStatement.h"
#include "modules/webdatabase/SQLError.h"
#include "modules/webdatabase/SQLTransactionState.h"
#include "wtf/PassOwnPtr.h"
#include "wtf/ThreadSafeRefCounted.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace WebCore {

class AbstractSQLTransactionBackend : public ThreadSafeRefCountedWillBeGarbageCollectedFinalized<AbstractSQLTransactionBackend> {
public:
    virtual ~AbstractSQLTransactionBackend() { }
    virtual void trace(Visitor*) = 0;

    virtual void requestTransitToState(SQLTransactionState) = 0;

    virtual PassRefPtr<SQLError> transactionError() = 0;
    virtual AbstractSQLStatement* currentStatement() = 0;
    virtual void setShouldRetryCurrentStatement(bool) = 0;

    virtual void executeSQL(PassOwnPtr<AbstractSQLStatement>, const String& statement,
        const Vector<SQLValue>& arguments, int permissions) = 0;

};

} // namespace WebCore

#endif // AbstractSQLTransactionBackend_h

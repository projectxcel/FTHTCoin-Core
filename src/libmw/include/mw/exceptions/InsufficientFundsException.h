#pragma once

#include <mw/exceptions/FTHTException.h>
#include <mw/util/StringUtil.h>

#define ThrowInsufficientFunds(msg) throw InsufficientFundsException(msg, __FUNCTION__)
#define ThrowInsufficientFunds_F(msg, ...) throw InsufficientFundsException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class InsufficientFundsException : public FTHTException
{
public:
    InsufficientFundsException(const std::string& message, const std::string& function)
        : FTHTException("InsufficientFundsException", message, function)
    {

    }
};
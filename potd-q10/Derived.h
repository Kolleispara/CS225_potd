#pragma once

#include <string>
#include "Base.h"

class Derived : public Base
{
    public:
    std::string foo();
    std::string bar();
};
#pragma once

#include <iostream>

using namespace std;

class Turkey
{
public:
    Turkey();
    ~Turkey();
    virtual void gobble() = 0;
    virtual void fly() = 0;
};
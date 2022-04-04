#pragma once

#include <iostream>

using namespace std;

class Duck
{
public:
    Duck();
    ~Duck();
    virtual void quack() = 0;
    virtual void fly() = 0;
};
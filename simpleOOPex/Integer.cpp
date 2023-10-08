#include "Integer.h"
#include <iostream>

Integer::Integer(int number)
{
    this -> value = number;
    std::cout << "Object created\n";
}

Integer::~Integer()
{
    std::cout << "Object destroyed\n";
}

int Integer::getValue()
{
    return value;
}

void Integer::setValue(int number)
{
    value = number;
}

void Integer::print()
{
    std::cout << value << std::endl;
}
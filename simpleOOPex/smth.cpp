#include <iostream>
#include "sum.h";
#include "Integer.h";

int main()
{
    Integer n = 10;
    n.print();
    n.setValue(1223);
    int a = n.getValue();
    std::cout << "a = " << a << std::endl;
    n.print();
}


//You are given two interior angles(in degrees) of a triangle.
//
//Write a function to return the 3rd.
//
//Note: only positive integers will be tested.
#include <iostream>

int otherAngle(int a, int b)
{
    return 180 - a - b;
}

int main()
{
    std::cout << otherAngle(30, 60);
}

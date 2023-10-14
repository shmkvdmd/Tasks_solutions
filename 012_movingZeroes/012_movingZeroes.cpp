//Write an algorithm that takes an array and moves all of the zeros to the end,
//preserving the order of the other elements.
#include <iostream>
#include <string>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> v = input;
    size_t insert = 0;
    for (size_t i = 0; i != v.size(); ++i)
    {
        if (v[i] != 0)
        {
            v[insert] = v[i];
            if (i != insert) {
                v[i] = 0;
            }
            insert++;
        }
    }
    return v;
}

int main()
{
    std::vector<int> v1 = { 0,0,0,0,0,0,1,2,0,1,3 };
    for (auto i : move_zeroes(v1))
        std::cout << i << " ";
}


#include <iostream>
#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> arr;
    for (int i = start; i <= end; ++i)
    {
        arr.push_back(i);
    }
    return arr;
}
int main()
{
    for (auto i : between(1, 10))
        std::cout << i << " ";
}


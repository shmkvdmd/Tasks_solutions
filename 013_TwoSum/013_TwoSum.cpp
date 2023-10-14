//Write a function that takes an array of numbers(integers for the tests) and a target number.
//It should find two different items in the array that, when added together, give the target value.
//The indices of these items should then be returned in a tuple / list(depending on your language) like so : (index1, index2).
#include <iostream>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    std::pair<std::size_t, std::size_t> pair = { 0,0 };
    for (size_t i = 0; i != numbers.size(); ++i)
    {
        for (size_t j = 0; j != numbers.size(); ++j)
        {
            if (numbers[i] + numbers[j] == target && i != j)
                pair = { i,j };
        }
    }
    return pair;
}
int main()
{
    std::vector<int> v = { 1,2,3 };
    std::cout << two_sum(v, 4).first << " " << two_sum(v, 4).second;
}


//You are given an array(list) strarr of strings and an integer k. 
//Your task is to return the first longest string consisting of k consecutive strings taken in the array.
#include <iostream>
#include <string>
#include <vector>

std::string longestConsec(const std::vector<std::string>& strarr, int k)
{
    std::string temp;
    std::string max_str;
    for (size_t i = 0; i != strarr.size() - k + 1; ++i)
    {
        for (size_t j = i; j != i + k; ++j)
        {
            temp += strarr[j];
        }
        if (temp.size() > max_str.size())
        {
            max_str = temp;
        }
        temp = "";
    }
    return max_str;
}

int main()
{
    std::vector<std::string> arr = { "zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail" };
    std::cout << longestConsec(arr, 2);
}


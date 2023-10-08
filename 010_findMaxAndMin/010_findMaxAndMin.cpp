//Your task is to make two functions(max and min, or maximum and minimum, etc., depending on the language) 
//that receive a list of integers as input, and return the largest and lowest number in that list, respectively.
#include <iostream>
#include <vector>
#include <algorithm>
int min(std::vector<int> list) 
{
    int min = list[0];
    for (auto i : list)
        if (i < min)
            min = i;
    return min;
}

int max(std::vector<int> list)
{
    int max = list[0];
    for (auto i : list)
        if (i > max)
            max = i;
    return max;
}

//int max(std::vector<int> list)
//{
//    return *(std::max_element(list.begin(), list.end()));
//}
//int min(std::vector<int> list)
//{
//    return *(std::min_element(list.begin(), list.end()));
//}

int main()
{
    std::vector<int> list = { 52,312,512,67,12,74,9,4 };
    std::cout << "min = " << min(list);
    std::cout << "\nmax = " << max(list);
}


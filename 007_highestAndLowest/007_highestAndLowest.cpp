//In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.
//
//Examples
//highAndLow("1 2 3 4 5");  // return "5 1"
//highAndLow("1 2 -3 4 5"); // return "5 -3"
//highAndLow("1 9 3 4 -5"); // return "9 -5"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

std::string highAndLow(const std::string& numbers) {
	std::vector<int> nums;
	int max = INT_MIN;
	int min = INT_MAX;
	std::string currentNum;
	for (size_t i = 0; i != numbers.size(); ++i)
	{
		if (numbers[i] == '-' || isdigit(numbers[i]))
		{
			currentNum += numbers[i];
		}
		else if (!currentNum.empty())
		{
			nums.push_back(std::stoi(currentNum));
			currentNum.clear();
		}
	}
	if (!currentNum.empty()) {
		nums.push_back(std::stoi(currentNum));
	}
	for (auto i : nums)
	{
		if (i > max)
			max = i;
		if (i < min)
			min = i;
	}
	std::string result = std::to_string(max) + " " + std::to_string(min);
	return result;
}

int main()
{
	std::cout << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4");
}


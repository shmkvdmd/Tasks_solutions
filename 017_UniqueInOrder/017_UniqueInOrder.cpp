#include <iostream>
#include <vector>
#include <string>

std::vector<char> uniqueInOrder(const std::string& iterable) {
	std::vector<char> char_vec;
	for (size_t i = 0; i != iterable.length(); ++i)
	{
		if (iterable[i] != iterable[i + 1])
		{
			char_vec.push_back(iterable[i]);
		}
	}
	return char_vec;
}

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
	std::vector<T> vec;
	vec.push_back(iterable[0]);
	for (size_t i = 1; i != iterable.size(); ++i)
	{
		if (iterable[i - 1] != iterable[i])
		{
			vec.push_back(iterable[i]);
		}
	}
	return vec;
}

int main()
{
	std::string str = "AAAaaADD";
	std::vector<int> vec = { 2, 2,2,3,3, 5,1 };
	for (auto c : uniqueInOrder(vec))
	{
		std::cout << c << " ";
	}
	std::cout << std::endl;
	for (auto c : uniqueInOrder(str))
	{
		std::cout << c << " ";
	}
}

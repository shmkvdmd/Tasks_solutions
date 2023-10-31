//Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric
//digits that occur more than once in the input string.
//The input string can be assumed to contain only alphabets(both uppercase and lowercase) and numeric digits.
#include <iostream>
#include <string>
#include <unordered_map>

size_t duplicateCount(const std::string& in)
{
	std::unordered_map<char, int> charCount;
	std::string str = in;
	for (size_t i = 0; i != str.size(); ++i)
	{
		str[i] = tolower(str[i]);
		charCount[str[i]]++;
	}
	int count = 0;
	for (const auto& pair : charCount)
	{
		if (pair.second > 1)
			count++;
	}
	return count;
}

int main()
{
	std::string str = "Indivisibilities";
	std::cout << duplicateCount(str);
}

//Each lowercase letter becomes uppercase and each uppercase letter becomes lowercase.
#include <iostream>
#include <string>

std::string to_alternating_case(const std::string& str)
{
	std::string anotherStr = str;
	for (char& i : anotherStr)
		isupper(i) ? i = tolower(i) : i = toupper(i);
	return anotherStr;
}
int main()
{
	std::cout << to_alternating_case("joPA");
}


//Your job is to write a function which increments a string, to create a new string.
//
//If the string already ends with a number, the number should be incremented by 1.
//If the string does not end with a number.the number 1 should be appended to the new string.

#include <iostream>
#include <string>

using std::cout;

int main()
{
	std::string str = "foobar99";
	std::string intstr;
	std::string zero_string;
	int temp;
	for (size_t i = 0; i != str.length(); ++i)
	{
		if (isdigit(str[i]))
		{
			intstr = str.substr(i);
			str.erase(i);
			for (size_t j = 0; j != intstr.length(); ++j)
			{
				if (intstr[j] == '0')
				{
					zero_string += '0';
				}
			}
			temp = std::stoi(intstr);
			temp++;
			intstr = std::to_string(temp);
			str.append(zero_string);
			str.append(intstr);
			break;
		}
	}
	if (str.empty())
	{
		str = '1';
	}
	cout << str;
}

//Вам надо написать функцию Print, которая умеет печатать элементы переданного контейнера через указанную строку - разделитель.
//Первый аргумент функции — контейнер.Второй аргумент функции — строка - разделитель, которую надо печатать между элементами.
//В конце необходимо напечатать перевод строки \n.

#include <iostream>
#include <vector>
#include <string>
#include <list>

template <typename Container>
void Print(const Container& v, const std::string str)
{
	std::string answer;
	for (size_t i = 0; i != v.size(); ++i)
	{
		if (i != v.size() - 1)
		{
			std::cout << std::to_string(v[i]) + ", ";
		}
		else std::cout << std::to_string(v[i]);
	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> v = { 1,2,3,4 };
	std::list<int> l = { 1,2,3,4 };
	Print(v, ", ");
	Print(v, ", ");
}


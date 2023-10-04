#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Пароли
//Пароль от некоторого сервиса должен удовлетворять таким ограничениям :
//
//состоять из символов таблицы ASCII с кодами от 33 до 126;
//быть не короче 8 символов и не длиннее 14;
//из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.
//Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения.

bool IsGood(string password)
{
	int upper = 0, lower = 0, digits = 0, other = 0;
	for (char symbol : password)
	{
		if (symbol < 33 || symbol > 126)
			return false;
		if (symbol >= 'A' && symbol <= 'Z')
			upper = 1;
		else if (symbol >= 'a' && symbol <= 'z')
			lower = 1;
		else if (symbol >= '0' && symbol <= '9')
			digits = 1;
		else other = 1;
	}
	if (password.length() < 8 || password.length() > 14)
		return false;
	return upper + lower + digits + other >= 3;
}
int main() {
	string pass;
	cin >> pass;
	if (IsGood(pass))
		cout << "YES";
	else cout << "NO";
}
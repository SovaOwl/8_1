#include <iostream>
#include <cstring>

int function(int forbidden_length, int l, int* flag)
{
	if (l == forbidden_length)
	{
		return 1;
	}
	*flag = l;
	return 0;
}

using namespace std;

int main()
{
	system("chcp 1251");

	string str = "<3";
	int forbidden_length = -999, f = 0;

	cout << "Введите запретную длину: ";
	cin >> forbidden_length;
	cout << "Введите слово: ";
	cin >> str;

	int l = str.length();

	int function_res = function(forbidden_length, l, &f);
	if (function_res == 0)
	{
		cout << "Длина слова '" << str << "' равна " << l;
	}
	else if (function_res == 1)
	{
		cout << "Вы ввели слово запретной длины! До свидания.";
	}
}
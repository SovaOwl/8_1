#include <iostream>
#include <cstring>

using namespace std;

class bad_length : public exception
{
public:
	const char* what() const override
	{
		return "Вы ввели слово запретной длины! До свидания";
	}
};

int function(string str, int forbidden_length)
{
	if (str.length() == forbidden_length) throw bad_length();
}

int main()
{
	system("chcp 1251");

	string str = "ldldldld";
	int forbidden_length = -999;

	cout << "Введите запретную длину: ";
	cin >> forbidden_length;

	do
	{
		cout << "Введите слово: ";
		cin >> str;

		try
		{
			function(str, forbidden_length);
			cout << "Длина слова '" << str << "' равна " << str.length();
		}
		catch (const bad_length& ex)
		{
			cout << ex.what() << endl;
		}
		cout << endl;

	} while (str.length() != forbidden_length);
}
#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
		if (str.length() == forbidden_length)
		{
			throw "bad_length";
		}
	return str.length();
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length;
	std::string str;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (true)
	{
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			std::cout << "Длина слова " << '"' << str << '"' << " равна " << function(str, forbidden_length) << std::endl;
		}
		catch (const char* except)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания";
			return 1;
		}
	}
}
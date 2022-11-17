#include <iostream>
#include "define.h"

int main()
{
	int x = 233;
	const std::string err_num = "Неправильный номер!";
	const std::string months[] = {
		"Ввод завершен.",
		"Январь",
		"Февраль",
		"Март",
		"Апрель",
		"Май",
		"Июнь",
		"Июль",
		"Август",
		"Сентябрь",
		"Октябрь",
		"Ноябрь",
		"Декабрь",
	};

	bool check = x < static_cast<int>(status::quit) ||
		static_cast<int>(month::dec) < x;

//	if (x < status::quit || month::dec > x)
	if (check)
	{
		std::cout << err_num << std::endl;

		return x;
	}
	
	std::cout << x << std::endl;
//	return months[x];

	return 0;
}

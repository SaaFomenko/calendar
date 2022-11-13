#include <string>
#include "define.h"

std::string getMonth(int x)
{
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

	if (x >= month::jan - status::error && x <= month::dec)
	{
		return months[x];
	}
	
	return err_num;
}

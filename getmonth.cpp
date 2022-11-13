#include <string>
#include "define.h"

std::string getMonth(int x)
{
	const std::string err_msg = "Неправильный номер!";
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

	if (x >= month::jan - 1 && x < month::dec + 1)
	{
		return months[x];
	}
	
	return err_msg;
}

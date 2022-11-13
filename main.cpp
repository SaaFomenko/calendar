#include <iostream>
#include "define.h"

int main()
{
	const std::string msg = "Введите номер месяца:";
	int x = 0;

	do {
		outStr(msg, ' ');
  
		std::cin >> x;
  
		const std::string resp = getMonth(x);
  
		outStr(resp);
  
	} while (x != status::quit);

	return status::quit;
}

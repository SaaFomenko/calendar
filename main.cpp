#include <iostream>
#include "define.h"

int main()
{
	const std::string msg = "Введите номер месяца:";
//	const char en
	int x = 0;

	do {
		outStr(msg, ' ');
  
		std::cin >> x;
  
		const std::string resp = getMonth(x);
  
		outStr(resp);
  
	} while (x != 0);

	return 0;
}

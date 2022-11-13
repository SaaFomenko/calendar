#include <string>

enum status
{
	quit,
	error
};

enum month
{
	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sen,
	oct,
	nov,
	dec
};

void outStr(const std::string msg, char end = '\n');
std::string getMonth(int x);

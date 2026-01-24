#include "header.hpp"

//index, first_name, last_name, nickname, Input the
int	main(void)
{
	int quit = 0;
	std::string buff;
	while(!quit)
	{
		std::cin >> buff;
		if (buff.compare("ADD") == 0)
			std::cout << "ADD";
		if (buff.compare("SEARCH") == 0)
			std::cout << "SEARCH";
		if (buff.compare("EXIT") == 0)
			quit = !quit;
	}
	return (0);
}

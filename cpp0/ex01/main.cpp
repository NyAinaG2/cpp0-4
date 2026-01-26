#include "header.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string buff;
	while(1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT\n>";
		if (!std::getline(std::cin, buff) || std::cin.eof() || buff.compare("EXIT") == 0 || std::cin.fail())
			break;
		if (buff.empty())
			continue;
		if (buff.compare("ADD") == 0)
			phonebook.add();
		if (buff.compare("SEARCH") == 0)
			phonebook.searh();
	}
	return (0);
}

#include "header.hpp"
#include "PhoneBook.hpp"

std::string g_fields[FIELD_LEN] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};

bool	isNotPrintable(const std::string &str)
{
	for (size_t i = 0; str[i]; i++)
		if (!std::isprint(str[i]))
			return (true);
	return (false);
}

bool	isNumber(const std::string &str)
{
	for (size_t i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return (false);
	return (true);
}

std::string putstr_inrow(const std::string &s)
{
	if (s.length() > 10)
		return s.substr(0, 9) + ".";
	return s;
};

int	main(void)
{
	PhoneBook	phonebook;
	std::string buff;
	while(1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT\n>";
		if (!std::getline(std::cin, buff) || std::cin.eof())
			std::exit(0);
		if (buff.empty())
			continue;
		if (buff.compare("ADD") == 0)
			phonebook.add();
		if (buff.compare("SEARCH") == 0)
			phonebook.search();
		if (buff.compare("EXIT") == 0)
			std::exit(0);
		std::cin.clear();
	}
	return (0);
}

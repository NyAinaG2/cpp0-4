#include "header.hpp"
#include "Contact.hpp"
#include <algorithm>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

bool	isNotPrintable(const std::string str)
{
	for (size_t i = 0; str[i]; i++)
		if (!std::isprint(str[i]))
			return (true);
	return (false);
}

void	Contact::set_infos(void)
{
	for (size_t i = 0; i < FIELD_LEN; i++)
	{
		std::cout << i << " >";
		if (!std::getline(std::cin, this->_infos[i]) || std::cin.eof())
			std::exit(0);
		if (this->_infos[i].empty() || isNotPrintable(this->_infos[i]))
		{
			std::cout << "Input should be not empty and doesn't contain unpritable char" << std::endl;
			for (size_t j = 0; j < FIELD_LEN; j++)
				this->_infos[j].clear();
			return ;
		}
	}
	return ;
}

void	Contact::display_infos(void)
{
	for (size_t i = 0; i < FIELD_LEN; i++)
		std::cout << i << " : "<< this->_infos[i] << std::endl;
	return ;
}

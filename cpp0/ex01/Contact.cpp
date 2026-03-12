#include "header.hpp"
#include "Contact.hpp"
#include <algorithm>

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(const Contact &source)
{
	for (int i = 0; i < FIELD_LEN; i++)
		this->_infos[i] = source._infos[i];
}

void	Contact::set_infos(void)
{
	Contact	tmp;
	for (size_t i = 0; i < FIELD_LEN; i++)
	{
		std::cout << g_fields[i] << " >";
		if (!std::getline(std::cin, tmp._infos[i]) || std::cin.eof())
			std::exit(0);
		if (tmp._infos[i].empty() || isNotPrintable(tmp._infos[i]))
		{
			std::cout << "Invalid input" << std::endl;
			return ;
		}
		if (i == NUM_INDEX && !isNumber(tmp._infos[i]))
		{
			std::cout << "Invalid phone number" << std::endl;
			return ;
		}
	}
	*this = tmp;
	return ;
}

void	Contact::display_infos(void)
{
	if (this->_infos[0].empty())
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	for (size_t i = 0; i < FIELD_LEN; i++)
		std::cout << g_fields[i] << " : "<< this->_infos[i] << std::endl;
	return ;
}

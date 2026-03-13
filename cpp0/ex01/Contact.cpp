#include "header.hpp"
#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(const Contact &source)
{
	for (int i = 0; i < FIELD_LEN; i++)
		this->_infos[i] = source._infos[i];
}

bool	Contact::set_infos(void)
{
	Contact	tmp;
	for (size_t i = 0; i < FIELD_LEN; i++)
	{
		std::cout << "(ADD) "<< g_fields[i] << ">";
		if (!std::getline(std::cin, tmp._infos[i]) || std::cin.eof())
			std::exit(0);
		if (tmp._infos[i].empty() || isNotPrintable(tmp._infos[i]))
		{
			std::cout << "Invalid input" << std::endl;
			return (false);
		}
		if (i == 3 && !isNumber(tmp._infos[i]))
		{
			std::cout << "Invalid phone number" << std::endl;
			return (false);
		}
	}
	*this = tmp;
	return (true);
}

void	Contact::display_in_row(int index)
{
	std::cout << std::setw(10) << index + 1 << "|";
	for (int j = 0; j < FIELD_LEN - 2; j++)
		std::cout << std::setw(10) << putstr_inrow(this->_infos[j]) << (j != FIELD_LEN - 3 ? "|" : "");
	std::cout <<  std::endl;
}

void	Contact::display_detailed_infos(void)
{
	if (this->_infos[0].empty())
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	for (size_t i = 0; i < FIELD_LEN; i++)
		std::cout << g_fields[i] << " : "<< this->_infos[i] << std::endl;
}
bool	Contact::empty(void) const
{
	return this->_infos[0].empty();
}

#include "header.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::add(void)
{
	int index = 0;
	while(index < CONTACTS_LEN && !this->_contacts[index]._infos[0].empty())
		index++;
	index = index >= CONTACTS_LEN ? 0 : index;
	this->_contacts[index].set_infos();
}

void	PhoneBook::search(void)
{
	std::string	buff;
	std::cout << std::setw(COL_LEN) << "Index" << "|";
	for (size_t i = 0; i < FIELD_LEN - 2; i++)
	{
		std::cout << std::setw(COL_LEN) << putstr_inrow(g_fields[i]);
		if (i != FIELD_LEN - 3)
			std::cout  << "|";
	}
	std::cout  << std::endl;
	for (int i = 0; i < CONTACTS_LEN; i++)
	{
		std::cout << std::setw(COL_LEN) << i + 1 << "|";
		for (int j = 0; j < FIELD_LEN - 2; j++)
		{
			std::cout << std::setw(COL_LEN) << putstr_inrow(this->_contacts[i]._infos[j]);
			if (j != FIELD_LEN - 3)
				std::cout  << "|";
		}
		std::cout <<  std::endl;
	}
	std::cout << "Choose a index for more details >";
	if (!std::getline(std::cin, buff) || std::cin.eof())
		std::exit(0);
	if(isNumber(buff) && std::atoi(buff.c_str()) >= 1 && std::atoi(buff.c_str()) <= CONTACTS_LEN)
		this->_contacts[std::atoi(buff.c_str()) - 1].display_infos();
	else
		std::cout << "Contact not found" << std::endl;
	return ;
}

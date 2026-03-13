#include "header.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::add(void)
{
	static int index = 0;
	index = index >= CONTACTS_LEN ? 0 : index;
	if(this->_contacts[index].set_infos())
		index++;
}

void	PhoneBook::search(void)
{
	std::string	buff;
	std::cout << std::setw(10) << "Index" << "|";
	for (size_t i = 0; i < FIELD_LEN - 2; i++)
		std::cout << std::setw(10) << putstr_inrow(g_fields[i]) << (i != FIELD_LEN - 3 ? "|" : "");
	std::cout  << std::endl;
	for (int i = 0; i < CONTACTS_LEN && !this->_contacts[i].empty(); i++)
		this->_contacts[i].display_in_row(i);
	std::cout << "(SEARCH) Choose a index for more details >";
	if (!std::getline(std::cin, buff) || std::cin.eof())
		std::exit(0);
	if (buff.empty())
		return ;
	if(isNumber(buff) && std::atoi(buff.c_str()) >= 1 && std::atoi(buff.c_str()) <= CONTACTS_LEN)
		this->_contacts[std::atoi(buff.c_str()) - 1].display_detailed_infos();
	else
		std::cout << "Contact not found" << std::endl;
}


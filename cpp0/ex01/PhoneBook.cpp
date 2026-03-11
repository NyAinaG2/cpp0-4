#include "header.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(void)
{
	std::cout << "Adding new Contact" << std::endl;
	int index = 0;
	while(index < CONTACTS_LEN && !this->_contacts[index]._infos[0].empty())
		index++;
	index = index >= CONTACTS_LEN ? 0 : index;
	this->_contacts[index].set_infos();
}

void	PhoneBook::search(void)
{
	std::cout << "Search Phone Book" << std::endl;
	for (int i = 0; i < CONTACTS_LEN; i++)
	{
		std::cout << i << " => ";
		for (int j = 0; j < FIELD_LEN; j++)
			std::cout << j << " : "<< this->_contacts[i]._infos[j] << " ";
		std::cout <<  std::endl;
	}
	return ;
}

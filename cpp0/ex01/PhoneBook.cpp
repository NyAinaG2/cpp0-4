#include "header.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	(void)this->contacts;
	std::cout << "New Phone Book" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destroy Phone Book" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	std::cout << "Add Phone Book" << std::endl;
	return ;
}

void	PhoneBook::searh(void)
{
	int i = 0;
	while (i < 5)
	{
		std::cout << this->contacts[0].first_name;
		i++;
	}

	std::cout << "Searh Phone Book" << std::endl;
	return ;
}

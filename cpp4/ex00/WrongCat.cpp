#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMiaow WrongMiaow!" << std::endl;
}

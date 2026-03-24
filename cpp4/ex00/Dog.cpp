#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	Animal::operator=(copy);
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf!" << std::endl;
}

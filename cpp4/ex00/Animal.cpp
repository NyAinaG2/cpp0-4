#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Constructor called for a new " << type << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal Animal!" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

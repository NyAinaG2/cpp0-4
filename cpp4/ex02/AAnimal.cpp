#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal")
{
	std::cout << "Default Animal Constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Animal Constructor called for a new " << type << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

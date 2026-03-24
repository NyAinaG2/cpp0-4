#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	AAnimal::operator=(copy);
	delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	delete _brain;
	std::cout << "Ouaf Ouaf!" << std::endl;
}

Brain *Dog::getBrain(void)
{
	return this->_brain;
}

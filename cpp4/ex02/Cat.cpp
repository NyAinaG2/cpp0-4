#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;

	AAnimal::operator=(copy);
	delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaow Miaow!" << std::endl;
}

Brain *Cat::getBrain(void)
{
	return this->_brain;
}
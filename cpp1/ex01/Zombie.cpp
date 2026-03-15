#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void) : _name("Default")
{
	std::cout << this->_name << ": Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << ": Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": Destructor called" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

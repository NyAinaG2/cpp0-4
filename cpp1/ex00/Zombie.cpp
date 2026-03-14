#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie \"" << _name << "\" created" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor of " << this->_name << " called" << std::endl;
	return ;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

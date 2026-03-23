#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << this->_name << ": \033[37mDefault FragTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << ": \033[37mFragTrap Constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "\033[37mCopy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "\033[37mCopy FragTrap assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << this->_name << ": \033[37mFragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	 std::cout << "FragTrap "<< this->_name << " : I just finished my project — high fives please!" << std::endl;
}

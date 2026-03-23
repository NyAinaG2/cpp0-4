#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << this->_name << ": \033[37mDefault ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << ": \033[37mScavTrap Constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "\033[37mCopy ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "\033[37mCopy ScavTrap assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << this->_name << ": \033[37mScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "\033[31mScavTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "\033[35mScavTrap " << this->_name << " has no energy points" << std::endl;
	if (this->_energy_points == 0 || this->_hit_points == 0)
		return ;
	this->_energy_points--;
	std::cout << "\033[34mScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	 std::cout << "ScavTrap "<< this->_name << " is now in Gate keeper mode." << std::endl;
}

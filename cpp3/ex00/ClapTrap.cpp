#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->_name << ": \033[37mDefault ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->_name << ": \033[37mClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "\033[37mCopy ClapTrap constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "\033[37mCopy ClapTrap assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	return *this;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->_name << ": \033[37mClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "\033[35mClapTrap " << this->_name << " has no energy points" << std::endl;
	if (this->_energy_points == 0 || this->_hit_points == 0)
		return ;
	this->_energy_points--;
	std::cout << "\033[34mClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "\033[31mClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (this->_hit_points <= amount)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "\033[33mClapTrap " << this->_name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "\033[35mClapTrap " << this->_name << " has no energy points" << std::endl;
	if (this->_energy_points == 0 || this->_hit_points == 0)
		return ;
	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << "\033[32mClapTrap " << this->_name << " gains " << amount << " hit points" << std::endl;
}
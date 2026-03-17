#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include "Weapon.hpp"
class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	attack( void );
		void	setWeapon( Weapon &weapon );
		HumanB( std::string name );
		~HumanB( void );
};
#endif

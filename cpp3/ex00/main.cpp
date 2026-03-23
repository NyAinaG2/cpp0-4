#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b("Clap");

	a.attack("A enemy");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("B enemy");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Random enemy");
	b.beRepaired(3);
	return 0;
}

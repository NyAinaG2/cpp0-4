#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
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
	}
	std::cout << std::endl;
	{
		ScavTrap c;
		ScavTrap d("Scav");
		for (int i = 0; i < 50; i++)
			c.attack("C enemy");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		c.takeDamage(2147483648);
		c.attack("C enemy");
		d.attack("D enemy");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("D enemy");
	}
	std::cout << std::endl;
	{
		FragTrap e;
		FragTrap f("Frag");
		FragTrap g(f);
		e.highFivesGuys();
		e.attack("E enemy");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("E enemy");
		// for (size_t i = 0; i < 101; i++)
		// 	g.beRepaired(100);
		f.highFivesGuys();
	}
	std::cout << std::endl;
	{
		FragTrap *h = new FragTrap("Lava");
		h->highFivesGuys();
		delete h;
	}
	return 0;
}

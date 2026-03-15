#include "Zombie.hpp"

int	main(void)
{
	int	count = 69;
	Zombie* horde = zombieHorde(count, "Crazy");
	if (horde == NULL)
		return (0);
	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}

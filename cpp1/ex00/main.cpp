#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombieHeap = newZombie("Heap");
	Zombie zombieStack("Stack");
	if (zombieHeap != NULL)
		zombieHeap->announce();
	zombieStack.announce();
	randomChump("Chump");
	if (zombieHeap != NULL)
		delete zombieHeap;
	return (0);
}

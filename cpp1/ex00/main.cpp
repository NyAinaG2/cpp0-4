#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombieHeap = newZombie("Heap");
	Zombie zombieStack("Stack");
	zombieHeap->announce();
	zombieStack.announce();
	randomChump("Chump");
	delete zombieHeap;
	return (0);
}

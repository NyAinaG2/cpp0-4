#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		AAnimal	*animals[10];
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "-" << std::endl;
			animals[i] = new Cat();
			animals[i + 5] = new Dog();
		}
		for (size_t i = 0; i < 5; i++)
		{
			animals[i]->makeSound();
			animals[i + 5]->makeSound();
		}
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "-" << std::endl;
			delete animals[i];
			delete animals[i + 5];
		}
	}
	std::cout << std::endl;
	{
		Cat cat1;
		Cat cat2 = cat1;
		Cat cat3;
		cat3 = cat1;
		cat1.getBrain()->setIdea(0, "Manger");
		std::cout << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << cat3.getBrain()->getIdea(0) << std::endl;
		cat2.getBrain()->setIdea(0, "Dormir");
		std::cout << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << cat3.getBrain()->getIdea(0) << std::endl;
		cat3.getBrain()->setIdea(0, "Chier");
		std::cout << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << cat3.getBrain()->getIdea(0) << std::endl;
	}
	std::cout << std::endl;
	{
		Dog dog1;
		Dog dog2 = dog1;
		Dog dog3;
		dog3 = dog1;
		dog1.getBrain()->setIdea(0, "Peloter");
		std::cout << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << dog2.getBrain()->getIdea(0) << std::endl;
		std::cout << dog3.getBrain()->getIdea(0) << std::endl;
		dog2.getBrain()->setIdea(0, "Boire");
		std::cout << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << dog2.getBrain()->getIdea(0) << std::endl;
		std::cout << dog3.getBrain()->getIdea(0) << std::endl;
		dog3.getBrain()->setIdea(0, "Fumer");
		std::cout << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << dog2.getBrain()->getIdea(0) << std::endl;
		std::cout << dog3.getBrain()->getIdea(0) << std::endl;
	}
	return 0;
}

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const Animal animaljah;
		const Dog dogjah;
		const Cat catjah;
		std::cout << animaljah.getType() << " " << std::endl;
		std::cout << dogjah.getType() << " " << std::endl;
		std::cout << catjah.getType() << " " << std::endl;
		animaljah.makeSound();
		dogjah.makeSound();
		catjah.makeSound();
	}
	std::cout << std::endl;
	{
		const WrongAnimal meta_wrong;
		const WrongAnimal* cat_wrong = new WrongCat();
		std::cout << meta_wrong.getType() << " " << std::endl;
		std::cout << cat_wrong->getType() << " " << std::endl;
		cat_wrong->makeSound();
		meta_wrong.makeSound();
		delete cat_wrong;
	}
	std::cout << std::endl;
	{
		const WrongCat wrongCat;
		const WrongAnimal wrongAnimal = wrongCat;
		const WrongCat cat = wrongCat;
		std::cout << wrongAnimal.getType() << " " << std::endl;
		std::cout << wrongCat.getType() << " " << std::endl;
		std::cout << cat.getType() << " " << std::endl;
		wrongCat.makeSound();
		wrongAnimal.makeSound();
		cat.makeSound();
	}
	return 0;
}

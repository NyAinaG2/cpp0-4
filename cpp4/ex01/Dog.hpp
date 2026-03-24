#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		~Dog( void );
		virtual void makeSound() const;
		Brain *getBrain(void);
};

#endif
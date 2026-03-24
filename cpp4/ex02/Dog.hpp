#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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
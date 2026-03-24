#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal(std::string type);
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &copy);
		virtual ~Animal( void );
		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif
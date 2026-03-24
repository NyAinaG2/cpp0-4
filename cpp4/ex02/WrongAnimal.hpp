#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
		WrongAnimal(std::string type);
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal( void );
		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif
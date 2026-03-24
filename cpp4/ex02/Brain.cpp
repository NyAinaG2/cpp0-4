#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if(this == &copy)
		return *this;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::getIdea(unsigned int index)
{
	if (index >= 100)
		return "";
	return this->_ideas[index];
}

void Brain::setIdea(unsigned int index, std::string idea)
{
	if (index >= 100)
		return ;
	this->_ideas[index] = idea;
}

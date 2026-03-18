#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address of the stringPTR: " << &stringPTR << std::endl;
	std::cout << "The memory address of the stringREF: " << &stringREF << std::endl;
	std::cout << "Display the address by using stringPTR: " << stringPTR <<std::endl;
	std::cout << "Display the address by using stringREF: " << &stringREF <<std::endl;
	std::cout << "The value pointed to by stringPTR: " << stringPTR << std::endl;
	std::cout << "Display the value by using the variable: " << str <<std::endl;
	std::cout << "Display the value by using stringPTR: " << *stringPTR <<std::endl;
	std::cout << "Display the value by using stringREF: " << stringREF <<std::endl;
	return (0);
}

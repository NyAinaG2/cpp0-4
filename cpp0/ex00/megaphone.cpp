#include <iostream>

void	ft_putstr_out(char *str)
{
	int	i = 0;
	while (str[i])
		std::cout << (char)std::toupper(str[i++]);
}

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(argv[i])
		ft_putstr_out(argv[i++]);
	std::cout << std::endl;
	return (0);
}

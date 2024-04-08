#include <iostream>

char	*toUpperCase(char *str)
{
	for (int i = 0; str[i]; ++i)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 'A' - 'a';
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; av[i]; ++i)
			std::cout << toUpperCase(av[i]);
	std::cout << std::endl;
	return (0);
}
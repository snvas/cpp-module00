#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(argv[i][j]));
			j++;
		}
		if (i != argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
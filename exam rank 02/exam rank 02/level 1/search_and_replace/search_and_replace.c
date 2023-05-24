#include <unistd.h>

int	is_in_str(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4 && (!argv[2][1] && !argv[3][1]))
	{
		if (!is_in_str(argv[1], argv[2][0]))
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		i = 0;
		if (is_in_str(argv[1], argv[2][0]))
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

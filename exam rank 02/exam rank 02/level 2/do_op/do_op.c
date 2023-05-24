#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int num;
	int num2;
	int res;
	int exit;

	if (argc ==  4)
	{
		exit = 1;
		num = atoi(argv[1]);
		num2 = atoi(argv[3]);
		while (exit)
		{
			if (argv[2][0] == '+')
				res = num + num2;
			if (argv[2][0] == '-')
				res = num - num2;
			if (argv[2][0] == '*')
				res = num * num2;
			if (argv[2][0] == '/')
				res = num / num2;
			if (argv[2][0] == '%')
				res = num % num2;
			printf("%d\n", res);
			exit = 0;
		}
	}
	if (argc != 4)
		write (1, "\n", 1);
	return (0);
}

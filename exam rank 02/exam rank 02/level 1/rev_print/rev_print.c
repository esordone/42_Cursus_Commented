#include <unistd.h>
#include <stdio.h> 

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
	
int main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = (ft_strlen(argv[1]) -1);
		while (argv[1][len])
		{
			write (1, &argv[1][len], 1);
			len--;
		}
	}
	write (1, "\n", 1);
	return (0);
}

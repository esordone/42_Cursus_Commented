/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:31:10 by esordone          #+#    #+#             */
/*   Updated: 2023/05/03 18:17:34 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*static int ft_counter(char str)
{
	int i = 0;
	if (str >= 'a' && str <= 'z')
		i = (str - 'a') + 1;
	else if (str >= 'A' && str <= 'Z')
		i = (str - 'A') + 1;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = ft_counter(argv[1][i]);
			while (repeat > 0)
			{
				write (1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:23:05 by esordone          #+#    #+#             */
/*   Updated: 2023/01/12 12:32:29 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.*/

#include <unistd.h>

int	ft_strlen (char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	main (int argc, char **argv)
{
	int i;
	int n;
	int len;
	int len2;
	int s;

	i = 0;
	n = 0;
	s = 0;
	if (argc == 3)
	{
		len2 = 0;
		len = ft_strlen (argv[1]);
		while (argv[2][i])
		{
			if (argv[1][n] == argv[2][i])
			{
				len2++;
				n++;
				if (len2 == len)
				{
					while (argv[1][s])
					{
						write (1, &argv[1][s], 1);
						s++;
					}
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

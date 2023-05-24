/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:44:05 by esordone          #+#    #+#             */
/*   Updated: 2023/05/12 12:13:26 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int n;
	int len;

	i = 0;
	n = 0;
	if (argc >= 1 && argc < 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		while (argv[2][i])
		{
			if (argv[1][n] == argv[2][i])
				n++;
			i++;
		}
		if (n == len)
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
	return (0);
}

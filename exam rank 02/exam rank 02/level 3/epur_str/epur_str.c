/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:30:29 by esordone          #+#    #+#             */
/*   Updated: 2023/01/09 14:41:56 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.*/

int main (int argc, char **argv)
{
	int i;
	int	check;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ')
				check = 1;
			if (!(argv[1][i] == ' '))
			{
				if (check)
					write (1, " ", 1);
				check = 0;
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

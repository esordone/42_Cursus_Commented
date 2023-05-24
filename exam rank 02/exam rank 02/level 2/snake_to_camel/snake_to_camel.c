/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:49:43 by esordone          #+#    #+#             */
/*   Updated: 2023/05/15 14:05:59 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//snake_case format es quan es substitueixen els espais per _
//ex: hola que tal = hola_que_tal
//
//lowerCamelCase es quan elimina els espais i posa majus en la primera lletra
//ex: hola que tal = HolaQueTal

/*Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.*/

int main(int argc, char **argv)
{
	int i;
	int	n;

	i = 0;
	n = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

/*int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] + 32;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] == '_') && (argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z'))
				argv[1][i + 1] = argv[1][i + 1] - 32;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				write (1, &argv[1][i + 1], 1);
				i++;
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:31:30 by esordone          #+#    #+#             */
/*   Updated: 2023/05/15 11:44:36 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		if (argv[1][i] == '\0')
		{
			write (1, "\n", 1);
			return (0);
		}
		else
		{
			while (argv[1][i])
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				{
					argv[1][i] = argv[1][i] + 13;
				}
				else if (argv[1][i] > 'M' && argv[1][i] <= 'Z')
					argv[1][i] = argv[1][i] - 13;
				if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				{
					argv[1][i] = argv[1][i] + 13;
				}
				else if (argv[1][i] > 'm' && argv[1][i] <= 'z')
					argv[1][i] = argv[1][i] - 13;
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

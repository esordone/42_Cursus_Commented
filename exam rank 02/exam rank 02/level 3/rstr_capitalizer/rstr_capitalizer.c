/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:14:08 by esordone          #+#    #+#             */
/*   Updated: 2023/05/09 11:42:45 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int ar;

	if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		ar = 1;
		while (ar < argc)
		{
			capitalizer(argv[ar]);
			write (1, "\n", 1);
			ar = ar + 1;
		}
	}
	return (0);
}

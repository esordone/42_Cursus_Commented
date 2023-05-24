/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:00:43 by esordone          #+#    #+#             */
/*   Updated: 2022/12/14 18:36:20 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		start;
	int		end;
	int		check;
	int		espai;
	char	*str;

	check = 0;
	espai = 0;
	i = 0;
	if (argc > 1)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && (!(str[i] == ' ' || str[i] == '\t')))
			i++;
		end = i;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
	
		while (str[i])
		{
			check = 1;
			if (str[i] == ' ' || str[i] == '\t')
				espai = 1;
			if (!(str[i] == ' ') || str[i] == '\t')
			{
				if (espai)
					write (1, " ", 1);
				espai = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
		if (check == 1)
			write (1, " ", 1);
		while (start < end)
		{
			write (1, &str[start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

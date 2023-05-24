/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:43:13 by esordone          #+#    #+#             */
/*   Updated: 2023/05/09 13:07:04 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*void	write_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	num_words(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t')
			n++;
		i++;
	}
	return (n);
}*/

int main(int argc, char **argv)
{
	int	end;
	int start;
	int i;
	char *str;
	int flag;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
			i++;
		while (i >= 0)
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
				i--;
			end = i;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				i--;
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &str[start], 1);
				start++;
			}
			if (flag != 0)
			{
				write (1, " ", 1);
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

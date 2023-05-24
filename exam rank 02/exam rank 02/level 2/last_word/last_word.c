/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:00:16 by esordone          #+#    #+#             */
/*   Updated: 2023/05/12 11:43:47 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;
	char *str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
			i--;
		end = i + 1;
		while (str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n' && i > 0) 
			i--;
		start = i;
		while (str[start] && start < end)
		{
			write (1, &str[start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

/*int ft_end(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	while (len > 0)
	{
		if (str[len] != ' ' && str[len + 1] == '\0')
			return (len + 1);
		if (str[len] != ' ' && str[len + 1] == ' ')
			return (len  + 1);
		len--;
	}
	return (len);
}

int ft_start(char *str)
{
	int start;

	start = ft_end(str);
	while (start > 0)
	{
		if (str[start - 1] == ' ')
		   return (start);
		start--;
	}
	return (start);
}

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;

	i = 0;
	if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		start = ft_start(argv[1]);
		end = ft_end(argv[1]);
		while (start < end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:07:43 by esordone          #+#    #+#             */
/*   Updated: 2023/05/11 14:13:39 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//0. Quantes paraules tinc
//1. Separar paraules (necessite un start i un end)
//2. crear els substr
//4. Retorna array de str

int num_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\n' ||
			str[i - 1] == '\t' || i == 0) && (str[i] != ' ' || str[i] != '\n' ||
			str[i] != '\t'))
		{
			words++;
		}
		i++;
	}
	return (words);
}
void ft_free(char **str, int i)
{
	int count;

	count = 0;
	while (count < i)
	{
		free(str[count]);
		count++;
	}
	free (str);
}

char    **ft_split(char *str)
{
	int word;
	int i;
	char **big_box;
	int words = num_words(str);

	word = 0;
	big_box = (char **)malloc(sizeof(char *) * (words + 1));
	if (!big_box)
		return (0);
	while (*str != '\0')
	{
		i = 0;
		while (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		big_box[word] = (char *)malloc(sizeof(char) * 4000);
		if (!big_box[word])
		{
			ft_free(big_box, word);
			return (0);
		}
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0')
		{
			big_box[word][i] = *str;
			str++;
			i++;
		}
		big_box[word][i]= '\0';
		word++;
	}
	big_box[word] = 0;
	return (big_box);
}

/*int main()
{
	int i;
	char **r;

	//printf("split = %s\n", ft_split(&r));
	i = 0;
	r = ft_split("hola mariola");
	//printf("start = %d\n", ft_start(r, 0));
	//printf("end = %d\n", ft_end(r, 0));
	while (r[i])
	{
		printf("|%s|\n", r[i]);
		i++;
	}
}*/

/*int ft_start(char *str, int start)
{
	while (str[start])
	{
		if (str[start] != ' ' && str[start] != '\n' && str[start] != '\t')
			return (start);
		else if ((str[start] != ' ' && str[start] != '\n' && str[start] != '\t') &&
				(str[start - 1] == ' ' || str[start - 1] == '\n' || str[start - 1] == '\t'))
			return (start);
		start++;
	}
	return (start);
}

int ft_end(char *str, int start)
{
	int end;

	end = ft_start(str, start);
	while (str[end])
	{
		if ((str[end] != ' ' && str[end] != '\n' && str[end] != '\t') &&
			(str[end + 1] == '\0' || str[end + 1] == ' ' || str[end] == '\n' || str[end] == '\t'))
			return (end);
		end++;
	}
	return (end);
}

//split de Jesus
char    **ft_split(char *str)
{
	char	**big_box;
	int	word;
	int	i;

	word = 0;
	big_box = (char **)malloc (300 * sizeof (char*));
	if (!big_box)
		return (0);
	while (*str != '\0')
	{
		i = 0;
	 	while (*str == ' ' || *str == 9 || *str == 10)
			str++;
		big_box[word] = (char*)malloc(4100 * sizeof(char));
		if (!big_box[word])
			return(0);
		while (*str != ' ' && *str != 9 && *str != 10 && *str != '\0')
		{
			big_box[word][i] = *str;
			str++;
			i++;
		}
		big_box[word][i] = '\0';
		word++;
	}
	big_box[word] = 0;
	return(big_box);
}*/
 

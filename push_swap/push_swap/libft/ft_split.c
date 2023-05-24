/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:56:27 by esordone          #+#    #+#             */
/*   Updated: 2022/11/10 17:21:24 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(char *s, char c, int i)
{
	int	n;
	int	aux;

	n = 0;
	aux = 0;
	while (s[n] == c)
		n++;
	while (s[n])
	{
		if (aux == i)
			return (n);
		while (s[n] != c)
			n++;
		while (s[n] == c)
			n++;
		aux++;
	}
	return (n);
}

int	len_sub_str(char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{	
		size++;
		i++;
	}
	return (size);
}

int	how_many_str(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
			i++;
		}
		else
			i++;
	}
	return (word);
}

void	free_malloc(char **r, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(r[j]);
		j++;
	}
	free(r);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	*str;
	char	**r;
	size_t	len;
	int		words;

	str = (char *)s;
	words = how_many_str(str, c);
	i = 0;
	r = (char **)malloc((words + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	while (i < words)
	{
		len = len_sub_str(str, c, start(str, c, i));
		r[i] = ft_substr(s, start(str, c, i), len);
		if (!r[i])
		{
			free_malloc(r, i);
			return (NULL);
		}
		i++;
	}
	r[i] = 0;
	return (r);
}

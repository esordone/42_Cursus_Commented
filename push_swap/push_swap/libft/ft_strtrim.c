/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:49:12 by esordone          #+#    #+#             */
/*   Updated: 2022/10/10 14:34:06 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_is_inside_the_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	checkstart(char const *s1, char const *set)
{
	char	*s;
	char	*n;
	int		i;

	i = 0;
	s = (char *)s1;
	n = (char *)set;
	while (s[i] != '\0')
	{
		if (!char_is_inside_the_set(n, s[i]))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	checkend(char const *s1, char const *set)
{
	char	*mlen;
	char	*l;
	int		i;

	l = (char *)set;
	mlen = (char *)s1;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (!char_is_inside_the_set(l, mlen[i]))
		{
			return (i);
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	int		newlen;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = checkstart(s1, set);
	end = checkend(s1, set);
	if (end < start)
	{
		end = start;
		newlen = end - start + 1;
	}
	else
		newlen = end - start + 1 +1;
	s3 = ft_calloc(sizeof(char), newlen);
	if (!s3)
		return (NULL);
	while (i < newlen - 1)
	{
		s3[i] = s1[start + i];
		i++;
	}
	return (s3);
}

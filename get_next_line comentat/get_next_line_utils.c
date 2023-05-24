/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:13:35 by esordone          #+#    #+#             */
/*   Updated: 2022/11/16 11:27:11 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	char	i;

	i = (char)c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == i)
			return (&(*s));
		s++;
	}
	if (i == '\0')
			return (&(*s));
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(size * count);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	ft_bzero(p, size * count);
	return (p);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	//size_t	n;
	size_t	len1;

	len1 = ft_strlen(s1);
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if(!s1)
			return (NULL);
		s1[0] = '\0';
	}
	s3 = (char *)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
	if (!s3)
		return (ft_free(&s1));
	i = -1;
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	i = 0;
	while (s2[i] != '\0')
		s3[len1++] = s2[i++];
	s3[len1] = '\0';
	free(s1);
	return (s3);
}

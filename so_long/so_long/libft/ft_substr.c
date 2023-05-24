/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:13:41 by esordone          #+#    #+#             */
/*   Updated: 2022/10/11 13:51:23 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	n;
	char			*s2;

	if (!*s || start > ft_strlen(s))
	{
		s2 = (char *)malloc(sizeof(char) * (1));
		if (!s2)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	n = 0;
	while (s[start] && n < len)
	{
		s2[n] = s[start];
		start++;
		n++;
	}
	s2[n] = '\0';
	return (s2);
}

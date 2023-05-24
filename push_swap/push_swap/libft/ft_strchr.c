/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:18:09 by esordone          #+#    #+#             */
/*   Updated: 2022/10/07 12:10:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*n;
	char	i;

	n = (char *)s;
	i = (char)c;
	while (*n != i)
	{
		if (*n == 0)
		{
			return (NULL);
		}
		if (*n == '\0')
			return (n);
		n++;
	}
	return (n);
}

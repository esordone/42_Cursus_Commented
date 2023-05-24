/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:02:32 by esordone          #+#    #+#             */
/*   Updated: 2022/09/27 18:09:54 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	p;
	size_t			i;

	st = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (st[i] == p)
			return (&st[i]);
		i++;
	}
	return (NULL);
}

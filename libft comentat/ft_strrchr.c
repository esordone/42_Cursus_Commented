/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:20:21 by esordone          #+#    #+#             */
/*   Updated: 2022/09/27 11:51:18 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;
	char	*n;
	int		len;

	i = (char)c;
	n = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (n == NULL)
			return (n);
		if (n[len] == i)
			return (n + len);
		if (n == 0)
			return (NULL);
		len--;
	}
	return (NULL);
}

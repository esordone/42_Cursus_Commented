/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:46:46 by esordone          #+#    #+#             */
/*   Updated: 2022/09/28 14:14:30 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		n = 0;
		while (i + n < len && haystack[i + n] == needle[n])
		{
			if (needle[n + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:45:43 by esordone          #+#    #+#             */
/*   Updated: 2022/09/21 11:58:20 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	len;

	i = ft_strlen(dst);
	len = (ft_strlen(dst) + ft_strlen(src));
	if (dstsize < i + 1)
		return (dstsize + ft_strlen(src));
	k = 0;
	if (dstsize > i + 1)
	{	
		while (src[k] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[k];
			k++;
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}

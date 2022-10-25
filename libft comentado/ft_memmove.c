/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:46:08 by esordone          #+#    #+#             */
/*   Updated: 2022/10/25 11:36:57 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Aquesta funcio evita el overlap
//1. copia len bytes de src a dst
//2. si es superposen, es copies d'una manera no destructiva
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	if (dest == sorc)
		return (dest);
	if (dest < sorc)
	{
		while (len > i)
		{
			dest[i] = sorc[i];
			i++;
		}
	}
	else
	{
		while (i < len--)
		{
			dest[len] = sorc[len];
		}
	}
	return (dest);
}

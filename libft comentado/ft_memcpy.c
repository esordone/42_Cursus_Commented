/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:28:09 by esordone          #+#    #+#             */
/*   Updated: 2022/10/25 11:35:31 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. copia fins a n bytes de l'adreca de memoria de src a 
// l'adreca de memoria de dst
// 2. Si dst es igual a src, retorna 0
// 3. Retorna el valor original de dst
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src)
	{
		return (0);
	}
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

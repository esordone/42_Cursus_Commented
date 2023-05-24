/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:46:02 by esordone          #+#    #+#             */
/*   Updated: 2022/10/25 10:13:38 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//1. borra la info en els n bytes dels del punter, plenant de 0 el contingut
//2. no retorna res
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;
	size_t	num;

	str = (char *)s;
	//tambe funciona si plena el string de 0 enlloc de '\0'
	num = '\0';
	i = 0;
	while (i < n)
	{
		str[i] = num;
		i++;
	}
}

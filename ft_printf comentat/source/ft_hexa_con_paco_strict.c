/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:53:58 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 18:11:08 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexa(unsigned int n, char format)
{
	int		res;
	char	word;

	res = 0;
	if (format == 'x')
		word = 'a';
	else
		word = 'A';
	if (n >= 16)
	{
		res = (ft_hexa((n / 16), format));
		if (res == -1)
			return (-1);
	}
	if (n % 16 <= 9)
	{
		if (ft_putchar((n % 16) + '0') != 1)
			return (-1);
		res++;
	}
	else
	{
		if (ft_putchar(((n % 16) - 10) + word) != 1)
			return (-1);
		res++;
	}
	return (res);
}

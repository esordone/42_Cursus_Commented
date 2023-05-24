/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:05:43 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 16:55:56 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_format(char format, va_list ap)
{
	int	res;

	res = 0;
	if (format == 'c')
		res = ft_putchar(va_arg(ap, int));
	// coje el valor de del argumento de la lista (va_list)
	// me pone el tipo que le digo
	// va_arg em permet passar d'un argument a l'altre
	else if (format == 's')
		res = ft_putstr(va_arg(ap, char*));
	else if (format == 'p')
	{
		res = res + (write(1, "0x", 2));
		if (res != 2)
			return (-1);
		res = res + ft_put_pointer(va_arg(ap, unsigned long long));
	}
	else if (format == 'd' || format == 'i')
		res = ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		res = ft_put_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		res = ft_hexa(va_arg(ap, unsigned int), format);
	else if (format == '%')
		res = write(1, "%", 1);
	return (res);
}

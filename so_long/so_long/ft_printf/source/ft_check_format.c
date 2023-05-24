/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:05:43 by esordone          #+#    #+#             */
/*   Updated: 2022/11/07 13:04:48 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_format(char format, va_list ap)
{
	int	res;

	res = 0;
	if (format == 'c')
		res = ft_putchar(va_arg(ap, int));
	else if (format == 's')
		res = ft_putstr(va_arg(ap, char *));
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
		res = ft_hexa(va_arg(ap, unsigned int), format, res);
	else if (format == '%')
		res = write(1, "%", 1);
	return (res);
}

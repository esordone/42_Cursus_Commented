/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:59:42 by esordone          #+#    #+#             */
/*   Updated: 2022/11/07 13:23:27 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		i;
	int		res;
	int		res_aux;

	i = 0;
	res = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			res_aux = ft_check_format(format[i], ap);
		}
		else
			res_aux = ft_putchar(format[i]);
		if (res_aux == -1)
			return (-1);
		res = res + res_aux;
		i++;
	}
	va_end(ap);
	return (res);
}

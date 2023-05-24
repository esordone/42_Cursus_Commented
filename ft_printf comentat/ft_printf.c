/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:59:42 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 16:45:04 by esordone         ###   ########.fr       */
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
			//aci faig el check del format i asigne el seu valor al aux de res
		}
		else
			res_aux = ft_putchar(format[i]);
		if (res_aux == -1)
		{
			//cree un res aux per protegir el write. si n existeix el aux, com 
			//sume res a la funcio mai donaria -1, donaria altre numero i no estarua protegit
			//torne a fer va_end perque si falla el programa termina aci
			va_end(ap);
			return (-1);
		}
		//una vegada protegit ja el sume
		res = res + res_aux;
		i++;	
	}
	va_end(ap);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:46:08 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 16:35:23 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_pointer(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
		len = len + (write(1, "0", 1));
	else
	{
		if (p >= 16)
		{
			//reduisc el numero decimal a base 16
			len = len + (ft_put_pointer(p / 16));
			len = len + (ft_put_pointer(p % 16));
		}
		else
		{
			//com en hexadecimal fins el 9 es igual que en decimal puc sumar-li '0'
			if (p < 10)
				len = len + (ft_putchar(p + '0'));
			else
				len = len + (ft_putchar((p - 10) + 'a'));
			//de 10 a 15 he de restar 10 al num per quedar-me amb un digit yaban
			//i sumar-li el caracter 'A' o 'a' per convertir a hexadecimal
			//Per passar a majus o a minus sume +32, perque els caracters son en
			//decimal
		}
	}
	return (len);
}

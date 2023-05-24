/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:53:58 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 17:08:53 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_count_hexa(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		n = n / 16;
		len++;
	}
	//printf("El len de n es |%d|\n", len);
	return (len);
}

int	ft_hexa(unsigned int n, char format)
{
	int	res;
	int	len;

	len = 0;
	res = 0;
	if (n == 0)
	{
		res = (write(1, "0", 1));
		if (res != 1)
			return (-1);
	}
	else
	{
		if (n >= 16)
		{
			res = res + (ft_hexa((n / 16), format));
			res = res + (ft_hexa((n % 16), format));
			//printf("Ara res val |%d|\n", res);
		}
		else 
		{
			if (n <= 9)
			{
				res = res + (ft_putchar(n + '0'));
				/*if (res == -1)
					return (-1);
				len = len + res;*/
			//printf("N es mes menut o igual que 9, ara res val |%d|\n", res);
			}
			else
			{
				if (format == 'x')
				{
					res = (ft_putchar((n - 10) + 'a'));
					if (res == -1)
						return (-1);
					len = len + res;
				}
				if (format == 'X')
				{
					res = (ft_putchar((n - 10) + 'A'));
					if (res == -1)
						return (-1);
					len = len + res;
				}
			//printf("N es 10 o mes gran, ara res val |%d|\n", res);
			}
		}
		/*if (res == -1)
			return (-1);
	}
	len = len + res;*/
	}
	return (len);
}
/*
int	main(void)
{
	printf("el resultat final es |%d|\n", ft_hexa(234, 'X'));
	return (0);
}*/

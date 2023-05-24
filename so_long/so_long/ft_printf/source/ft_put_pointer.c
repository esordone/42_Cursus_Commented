/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:46:08 by esordone          #+#    #+#             */
/*   Updated: 2022/10/24 18:16:35 by esordone         ###   ########.fr       */
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
			len = len + (ft_put_pointer(p / 16));
			len = len + (ft_put_pointer(p % 16));
		}
		else
		{
			if (p < 10)
				len = len + (ft_putchar(p + '0'));
			else
				len = len + (ft_putchar((p - 10) + 'a'));
		}
	}
	return (len);
}

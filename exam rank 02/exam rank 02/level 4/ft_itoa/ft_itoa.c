/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:36:07 by esordone          #+#    #+#             */
/*   Updated: 2023/05/15 14:59:15 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	lenght(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	//modifique el len per si es negatiu tindre lloc per al '-'
	if (n < 0)
	{
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

//me lleve de damunt els negatius, sempre son positius
int	neg_num(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}

char	*ft_itoa(int nbr)
{
	char *res;
	int len;

	len = lenght(nbr);

	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
		res[0] = '-';
	while (nbr)
	{
		len--;
		res[len] = neg_num(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}

/*int main()
{
	int n = 0;
	char *res;
	int i;

	res = ft_itoa(n);
	while (res[i])
	{
		printf("|%c|\n", res[i]);
		i++;
	}
	return (0);
}*/

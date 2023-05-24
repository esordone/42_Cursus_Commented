/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:10:52 by esordone          #+#    #+#             */
/*   Updated: 2023/05/09 11:13:14 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int signe;

	i = 0;
	res = 0;
	signe = 1;
	// en codi ascii del 9 al 13 son '\t', '\v', '\n'...
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		//si fora atoi base se mutiplicaria per la base
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (signe * res);
}

/*int main()
{
	char str[] = "-426587192";

	printf("resultat ft_atoi = %d\n", ft_atoi(str));
	printf("resultat atoi = %d\n", atoi(str));
	return (0);
}*/

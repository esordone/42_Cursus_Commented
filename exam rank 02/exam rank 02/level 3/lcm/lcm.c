/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:24:44 by esordone          #+#    #+#             */
/*   Updated: 2022/12/13 17:44:41 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;
	unsigned int	max;

	if (!a || !b)
		return (0);
	//Mire quin es mes gran que quin
	if (a > b)
		n = a;
	else
		n = b;
	max = n;
	while (1)
	{
		//m'assegure que la n es multiple dels dos
		if ((n % a) == 0 && (n % b) == 0)
			return (n);
		//Vas fent els multiples del mes gran
		n = n + max;
	}
	return (n);
}

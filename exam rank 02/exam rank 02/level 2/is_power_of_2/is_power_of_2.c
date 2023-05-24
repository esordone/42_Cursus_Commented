/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:48:54 by esordone          #+#    #+#             */
/*   Updated: 2022/12/15 16:24:28 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	is_power_of_2(unsigned int n)
{
	int	i;

	i = 1;
	// 2 elevado a 0 es 1, por lo que es potencia
	if (n == 1)
		return (1);
	// si no existe n o es impar, devuelve 0
	if (!n || (n % 2) != 0)
		return (0);
	// mientras n sea menor o igual a 2
	// cuando acabe el bucle siempre sera 2 o 0
	while (n <= 2)
	{
		// dividimos el numero entre dos
		n = n / 2;
		// si al dividir es impar, devuelve 0
		if ((n % 2) != 0)
			return (0);
	}
	return (1);
}
/*
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
		// con operadores binarios, traduccion si n es 8:
		// ((8  &(AND) (-8)) == 8 if 1 (si no) 0)
		//
		//
		// como funciona el &
		//  8 == 00001000
		// -8 == 11111000
		//       &
		// ---------------
		//       00001000
}
*/

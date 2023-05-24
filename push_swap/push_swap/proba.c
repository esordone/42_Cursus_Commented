/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proba.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:36:25 by esordone          #+#    #+#             */
/*   Updated: 2023/01/18 10:26:33 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_test(t_element *ptr)
{

	int *p = ptr->argc;
	char *s = ptr->argv[1];

	printf("val de argc %i\n", *p);
	printf("val de argv %s\n", s);

	return ;
}	

int main (int argc, char **argv)
{
	int			i;
	//definim tipus d'estructura t_element(agrupacio de 
	//diversos diferents) amb contingut (llibre = punter)
	//es un valor estatic, per aixo mo dona problemes
	t_element	llibre;
	
	//Accedim als continguts de l'estructura
	//En argc guardem l'adreca de memoria 
	llibre.argc = &argc;
	llibre.argv = argv;
	llibre.i = 0;

	ps_test(&llibre);
	

	i = 0;	
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}/*
	else
	{
		while (argv[1][i])
		{
			//printf( "%i hay tantos argumentos", p_Llibre->argv[1] );
			printf( "%s el argumento es", p_Llibre->c );
			//printf( "%s el primer elemento equivale a \n", t_element.c);
			i++;
		}
	}*/
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:49:12 by esordone          #+#    #+#             */
/*   Updated: 2022/10/07 21:47:03 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int char_is_inside_the_set(char *set, char c)
{
	int i;

	i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int	checkstart(char const *s1, char const *set)
{
	char	*s;
	char	*n;
	int i;

	i = 0;
	//printf("Entro a check start\n");
	s = (char *)s1;
	n = (char *)set;
	while (s[i] != '\0')
	{
		if(!char_is_inside_the_set(n, s[i]))
		{
			//printf("El start esta en posicion %d\n", i);
			return i;
		}
		i++;
	}
	//printf("Salgo de check start con start en %d\n", i);
	return (i);
}

int checkend(char const *s1, char const *set)
{
	char	*mlen;
	char	*l;
	int i;

	//printf("Entro a check end\n");
	l = (char *)set;
	mlen = (char *)s1;
	i = ft_strlen(s1) - 1;
	//printf("i = strlen de s1 i vale  %d\n", i);
	while (i >= 0)
	{
		if(!char_is_inside_the_set(l, mlen[i]))
		{
			//printf("El end esta e posicion %d\n", i);
			return(i);
		}
		i--;
	}
	//printf("salfgo de check end con end apuntando a |%d|\n", i);
	return (i);
}

//1: Encontrar el start del corte
//2: Encontrar el end del corte
//3: Reservar el espaciod e memoria que necesito
//4: Copiar caracter por caracter desde el start al espacio reservado

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	int 	newlen;
	int		i;
	int start;
	int end;
	
	i = 0;
	start = checkstart(s1, set);
	end = checkend(s1, set);
	if (end < start)
	{
		end = start;
		newlen = end - start + 1;
		//printf("El end s habia creuat amb el start, l arreglo i ara val %d\n", end);
	}
	else
		newlen = end - start + 1 +1;
	
	//printf("Intento reservadar %d espacios de memoria\n", end - start + 1 + 1);
	s3 = ft_calloc(sizeof(char), newlen);
	if (!s3)
		return (NULL);
	while (i < newlen - 1)
	{
		s3[i] = s1[start + i];
		i++;
	} 
	return (s3);
}
/*
int	main(void)
{
	printf("|%s|\n", ft_strtrim("abcdba", "acb"));
	return (0);
}*/

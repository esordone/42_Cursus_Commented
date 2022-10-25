/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:56:27 by esordone          #+#    #+#             */
/*   Updated: 2022/10/10 19:28:16 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Separa strings en substrings
//2. Char c = delimitador (fins aci). Cal vore si esta en el str?
//3. Cal reservar espai de memoria per cada substring creat
//4. Cada nou string te un punter que apunta a l'adreca de memoria
//5. Tots el substrings acaben en '\0' (calloc)
//6. Retorna NULL si falla la memoria i si no retorna l'array de noves strings
int	start(char *s, char c, int	i)
{
	int	n;
	int	aux;

	n = 0;
	aux = 0;
	while (s[n] == c)
		n++;
	while (s[n])
	{
		if (aux == i)
			return (n);
		while (s[n] != c)
			n++;
		while (s[n] == c)
			n++;
		aux++;
	}
	return (n);
}
int	len_sub_str(char *s, char c, int i)
{
	int size;

	size = 0;
	while (s[i] && s[i] != c)
	{	
		size++;
		i++;
	}
	//printf("El len del substr es |%d|\n", size);
	return (size);	
}

int	how_many_str(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
			i++;
			//printf("hi ha tantes paraules: |%d|\n", word);
		}
		else
			i++;
	}
	return (word);
}
void	free_malloc(char **r, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(r[j]);
		j++;
	}
	free(r);
}
char	**ft_split(const char *s, char c)
{
	int		i;
	char	*str;
	char	**r;
	size_t	len;
	int		words;

	str = (char *)s;
	words = how_many_str(str, c);
	i = 0;
	r = (char **)malloc((words + 1) * sizeof(char*));
	if (!r)
		return (NULL);
	while (i < words)
	{
		len = len_sub_str(str, c, start(str, c, i));
		r[i] = ft_substr(s, start(str, c, i), len);
		if (!r[i])
		{
			free_malloc(r, i);
			return (NULL);
		}
		i++;
		//printf("El valor de r es |%s|\n", r[i]);
	}
	r[i] = 0;
	return (r);
}
/*
int	main(void)
{
	char	**r;
	int		i;

	i = 0;
	r = ft_split("hola mariola pepsicola", ' ');
	while (r[i])
	{
		printf("|%s|\n", r[i]);
		i++;
	}
	return (0);
}*/

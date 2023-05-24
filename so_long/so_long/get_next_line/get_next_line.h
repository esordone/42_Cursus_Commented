/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esordone <esordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:13:44 by esordone          #+#    #+#             */
/*   Updated: 2022/12/12 16:30:05 by esordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../so_long.h"

char	*get_next_line(int fd);
char	*read_file(int fd, char *str);
char	*next(char *str);
char	*the_line(char *str);
void	*ft_getfree(char **str);
char	*ft_getstrchr(char *s, int c);
void	ft_getbzero(void *s, size_t n);
void	*ft_getcalloc(size_t count, size_t size);
char	*ft_getstrjoin(char *s1, char *s2);
size_t	ft_getstrlen(char *s);

#endif

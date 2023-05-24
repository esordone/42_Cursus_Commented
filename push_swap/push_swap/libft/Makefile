# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 10:49:45 by esordone          #+#    #+#              #
#    Updated: 2023/01/16 16:37:23 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-------------------------------------COLORS-----------------------------------#
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#-----------------------------------VARIABLES----------------------------------#
LIB = ar -rcs
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
	  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_striteri.c \
	  ft_strmapi.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_itoa.c \
	  ft_strtrim.c ft_split.c

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c

RM = rm -f
RMB = rm -f .bonus
INCLUDE = libft.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCSBONUS:.c=.o)

%.o : %.c $(INCLUDE) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: .bonus

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

.bonus: $(NAME) $(OBJBONUS)
	@$(LIB) $(NAME) $(OBJBONUS)
	@touch $@

clean:
	@$(RM) $(OBJ) $(OBJBONUS) 
	@$(RMB)
	@echo "$(GRAY)Object files libft cleaned!$(DEF_COLOR)"

fclean: clean 
	@$(RM) $(NAME) 
	@$(RMB)
	@echo "$(GRAY)Executable files libft cleaned!$(DEF_COLOR)"

re: fclean all
	 @echo "$(GRAY)Everything have been remake!$(DEF_COLOR)"

rebonus: fclean bonus

.PHONY : all clean re fclean bonus rebonus

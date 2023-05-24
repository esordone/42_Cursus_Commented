# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:35:16 by esordone          #+#    #+#              #
#    Updated: 2022/10/25 13:28:26 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

NAME = libftprintf.a

LIB = ar -rsc

SRC = ft_printf.c \
	  source/ft_putstr.c \
	  source/ft_putnbr.c \
	  source/ft_putchar.c \
	  source/ft_put_unsigned.c \
	  source/ft_check_format.c \
	  source/ft_hexa.c \
	  source/ft_put_pointer.c

INCLUDE = ft_printf.h

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

%.o : %.c $(INCLUDE) Makefile
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

clean:
	@$(CLEAN) $(OBJ)

fclean: clean
	@$(CLEAN) $(NAME)
	@echo "$(GRAY)Print Files Cleaned!$(DEF_COLOR)"

re: flclean all

.PHONY: all clean fclean re

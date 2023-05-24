# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:02:45 by esordone          #+#    #+#              #
#    Updated: 2023/01/19 11:46:34 by esordone         ###   ########.fr        #
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
NAME = push_swap

SRC = main.c \
	  source/lists/add_lst_back.c \
	  source/lists/new_lst.c \
	  source/lists/last_lst.c \
	  source/lists/ft_add_lst_front.c \
	  source/lists/ft_clear_lst.c \
	  source/valid_input.c \
	  source/index.c \
	  source/operations/swap.c \
	  source/operations/push.c \
	  source/operations/rotate.c \
	  source/operations/reverse_rotate.c \
	  source/sort/small_sort.c \
	  source/sort/big_sort.c \
	  source/sort/sort_params.c \
	  source/sort/utils/ft_sort.c \
	  source/sort/utils/ft_divide.c \
	  source/sort/utils/min_first.c \
	  source/sort/utils/ft_put_first.c

INCLUDE = push_swap.h

OBJ = $(SRC:.c=.o)

LIBFT = libft

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

HEADER = libft.h

#-------------------------------------RULES------------------------------------#
%.o : %.c $(INCLUDE) Makefile
	@$(CC) $(FLAGS) -c $< -o $@

all: makelibft $(NAME)
	@echo "$(GREEN)*SUCCESSFULL COMPILATION!* $(DEF_COLOR)"

makelibft :
	@$(MAKE) -C $(LIBFT) bonus
	@echo "$(YELLOW)Libft compiled!$(DEF_COLOR)"

$(NAME): $(OBJ) libft/libft.a
	@$(CC) $(FLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	@$(CLEAN) $(OBJ)
	@cd libft && make clean
	@echo "$(RED)Object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(CLEAN) $(NAME)
	@cd libft && make fclean
	@echo "$(CYAN)Executables files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Everything has been remade!$(DEF_COLOR)"

.PHONY: all makelibft clean fclean re

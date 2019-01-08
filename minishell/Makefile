# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smbonan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 11:36:34 by smbonan           #+#    #+#              #
#    Updated: 2018/09/20 13:00:25 by smbonan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= minishell

C_FLAGS = -Wall -Werror -Wextra -g

SRC 	=  ft_realloc.c\
		   ft_strjoinch.c\
		   misc.c\
		   ft_strjoinchcl.c\
		   prompt_screen.c\
		   cd_builtin.c\
		   ft_strjoincl.c\
		   setenv_builtin.c\
		   echo_builtin.c\
		   ft_strsplitall.c\
		   signal_handler.c\
		   exec_command.c\
		   ft_strstartswith.c\
		   unsetenv_builtin.c\
		   ft_countwordsall.c\
		   ft_putnstr.c\
		   main.c\

OBJ 	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@gcc $(OBJ) -o $(NAME) -L libft/ -lft

clean:
	@make -C libft/ clean
	@rm -rf $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all, clean, fclean, re

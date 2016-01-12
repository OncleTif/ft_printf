# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/01/12 13:14:40 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

LIB = libft/libft.a

SRC =   ft_printf.c \
		ft_param_size.c \
		ft_conv_lister.c \
		ft_putcountstr.c \
		ft_strsplit_to_conv.c

OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	cp $(LIB) $(NAME)
	@ar rc $(NAME) $(OBJ)
	@echo "COMPILATION de $(NAME)"
	@ranlib $(NAME)

%.o: %.c $@
	@$(CC) $(FLAGS) $<
	@echo "compilation de $<"

clean:
	@rm -rf $(OBJ)
	@echo "suppression des objets"

fclean: clean
	@rm -rf $(NAME)
	@echo "suppression de $(NAME)"

$(LIB):
	make -C libft

re: fclean all

test: all
	gcc $(NAME) main.c

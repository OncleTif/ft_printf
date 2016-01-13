# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/01/13 16:01:41 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

SRC =   ft_printf.c \
		ft_conv_lister.c \
		ft_putcountstr.c \
		ft_strsplit_to_conv.c \
		ft_conv_picker.c \
		ft_str_picker.c


OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	cp $(LIB) $(NAME)
	@ar rc $(NAME) $(OBJ)
	@echo "COMPILATION de $(NAME)"
	@ranlib $(NAME)

%.o: %.c $@
	@$(CC) $(FLAGS) -c $<
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
	$(CC) $(FLAGS) -c main.c
	gcc -L./ -lftprintf $(FLAGS) main.o ./libftprintf.a

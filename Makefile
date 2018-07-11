# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pthorell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 17:22:27 by pthorell          #+#    #+#              #
#    Updated: 2018/07/11 16:23:00 by pthorell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

HEADER = libft.h

FLAG = -c $(C_FILES)

all: $(NAME)

$(NAME): build

build:
	gcc -c *.c
	ar -rc $(NAME).a *.o

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME).a

re: fclean all

.PHONY: re fclean clean all build

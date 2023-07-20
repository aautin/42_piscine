# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 14:19:19 by emfourni          #+#    #+#              #
#    Updated: 2023/07/16 19:42:48 by emfourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

PATH_SRC = ./src/

CC = cc

HEADER = ./library/libftrush02.h

FLAG = -Wall -Wextra -Werror 

SRC =	$(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) -I $(HEADER)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re debug

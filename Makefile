# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 19:56:21 by tsiguenz          #+#    #+#              #
#    Updated: 2021/10/13 14:58:22 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ${wildcard *.c}
OBJS = ${SRC:.c=.o}
NAME = libft.a

%.o:
	${CC} ${CFLAGS} -c ${SRC}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:	clean
			rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

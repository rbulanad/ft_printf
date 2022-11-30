# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 09:57:05 by rbulanad          #+#    #+#              #
#    Updated: 2022/11/30 10:18:26 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= libftprintf.a
SOURCES	= ft_printf.c \
		  ft_printf_func.c
OBJECTS	= ${SOURCES:.c=.o}
RM		= rm -f
CC		= gcc
CFLAGS 	= -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c =.o}

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}

all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 09:53:25 by rbulanad          #+#    #+#              #
#    Updated: 2022/11/24 11:18:09 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SOURCES = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isprint.c \
		  ft_isascii.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strdup.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strlcat.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_itoa.c \
		  ft_split.c
OBJECTS = ${SOURCES:.c=.o}
RM 		= rm -f
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
 
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
 
${NAME}: ${OBJECTS}
	 ar rc ${NAME} ${OBJECTS}

all: ${NAME}
	
clean:
	${RM} ${OBJECTS}
 
fclean: clean
	${RM} ${NAME}
 
re: fclean all
 
.PHONY: all clean fclean re

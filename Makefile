# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 14:30:19 by dduarte-          #+#    #+#              #
#    Updated: 2023/04/17 12:29:48 by dduarte-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_atoi.c ft_memcmp.c\
		ft_strlen.c ft_strlcpy.c	ft_strlcat.c ft_strchr.c ft_strncmp.c ft_strchr.c ft_strnstr.c ft_memcpy.c
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I include
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}
	${RM} teste

teste:
	${CC} ${CFLAGS} ${INCLUDE} ${NAME} -o teste

re:	fclean all teste

.PHONY: all clean fclean re
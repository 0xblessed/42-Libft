# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 14:26:58 by amunoz-b          #+#    #+#              #
#    Updated: 2023/09/16 15:18:34 by amunoz-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c ft_striteri.c


OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= cc

RM			= rm -f

FLAGS		= -Wall -Werror -Wextra

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc  ${NAME} ${OBJS}
			ranlib ${NAME}


all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all bonus

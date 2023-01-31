# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inaranjo <inaranjo@student.42lausan>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 14:01:13 by inaranjo          #+#    #+#              #
#    Updated: 2022/11/05 17:02:18 by inaranjo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_strlen.c  \
	  ft_memset.c  \
	  ft_bzero.c   \
	  ft_memcpy.c  \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c  \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_split.c \

OBJ = ${SRC:.c=.o}
BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \


BONUS_OBJ = ${BONUS:.c=.o}
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ) 
	ar rc ${NAME} ${OBJ} 

all: ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all 

bonus: ${OBJ} ${BONUS_OBJ}
	ar rc ${NAME} ${OBJ} ${BONUS_OBJ}

.PHONY: all clean fclean re bonus

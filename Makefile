# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/01 20:31:51 by mohhassa          #+#    #+#              #
#    Updated: 2018/11/13 20:02:43 by mohhassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = libc/ft_bzero.c \
				libc/ft_isalnum.c \
				libc/ft_isalpha.c \
				libc/ft_isascii.c \
				libc/ft_isdigit.c \
				libc/ft_atoi.c \
				libc/ft_isprint.c \
				libc/ft_memccpy.c \
				libc/ft_memchr.c \
				libc/ft_memcmp.c \
				libc/ft_memcpy.c \
				libc/ft_memmove.c \
				libc/ft_memset.c \
				libc/ft_strcat.c \
				libc/ft_strchr.c \
				libc/ft_strrchr.c \
				libc/ft_strcmp.c \
				libc/ft_strdup.c \
				libc/ft_strlcat.c \
				libc/ft_strlen.c \
				libc/ft_strncat.c \
				libc/ft_strncmp.c \
				libc/ft_strcpy.c \
				libc/ft_strncpy.c \
				libc/ft_strnstr.c \
				libc/ft_strstr.c \
				libc/ft_tolower.c \
				libc/ft_toupper.c \
				libc/ft_memdel.c \
				libc/ft_memalloc.c \
				libc/ft_strnew.c \
				libc/ft_strdel.c \
				libc/ft_strclr.c \
				libc/ft_striter.c \
				libc/ft_striteri.c \
				libc/ft_strmap.c \
				libc/ft_strmapi.c

INCLUDES = -I libft.h
OBJECTS = *.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

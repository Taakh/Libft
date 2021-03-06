# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdantzer <rdantzer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 13:23:40 by rmangili          #+#    #+#              #
#    Updated: 2015/01/01 23:53:09 by rdantzer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_putchar.c \
ft_putnbr.c \
ft_strcat.c \
ft_strcmp.c \
ft_strdup.c \
ft_tolower.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_putendl.c \
ft_putstr.c \
ft_strchr.c \
ft_strcpy.c \
ft_strlen.c \
ft_toupper.c \
ft_strrchr.c \
ft_strclr.c \
ft_strncat.c \
ft_strncpy.c \
ft_strnew.c \
ft_putchar_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_striter.c \
ft_striteri.c \
ft_bzero.c \
ft_memset.c \
ft_memmove.c \
ft_memdel.c \
ft_memcpy.c \
ft_memalloc.c \
ft_memchr.c \
ft_memcmp.c \
ft_memccpy.c \
ft_strlcat.c \
ft_strtrim.c \
ft_strsub.c \
ft_strjoin.c \
ft_itoa.c \
ft_strdel.c \
ft_strequ.c \
ft_strnequ.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strstr.c \
ft_strsplit.c \
ft_putendl_fd.c \
ft_isspace.c

OBJ = $(SRC:.c=.o) 

FLAGS = -Wall -Werror -Wextra

$(NAME): all

all:
	gcc -c -I. $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libft.a

re: fclean all

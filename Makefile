# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 15:15:30 by abisiani          #+#    #+#              #
#    Updated: 2025/05/22 20:17:59 by abisiani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Werror -Wextra -g
AR=ar rcs
CC=cc
NAME=tests
ARCHIVE=libft.a

HDR=libft.h

SRC=ft_isalpha.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_atoi.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c #ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ= $(SRC:.c=.o)

all: $(NAME)

test:
	gdb ./tests

$(NAME): $(ARCHIVE) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(NAME).c -L. -lft -lbsd
	./$(NAME)

$(ARCHIVE): $(OBJ)
	$(AR) $@ $^

$(OBJ) : $(SRC) $(HDR)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(NAME) $(ARCHIVE)

fclean: clean
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re

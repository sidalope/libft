# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 15:15:30 by abisiani          #+#    #+#              #
#    Updated: 2025/05/12 16:18:07 by abisiani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Werror -Wextra
AR=ar rcs
CC=cc
NAME=tests
ARCHIVE=libft.a

HDR=libft.h

SRC=ft_isalpha.c #ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi

OBJ= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(ARCHIVE) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(NAME).c -L. -lft

$(ARCHIVE): $(OBJ)
	$(AR) $@ $^

$(OBJ) : $(SRC) $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(NAME) $(ARCHIVE)

fclean: clean
	rm -f *~ \#* *.out
	rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re

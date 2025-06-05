
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 15:15:30 by abisiani          #+#    #+#              #
#    Updated: 2025/05/29 14:34:53 by abisiani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS= -g -Wall -Werror -Wextra
AR=ar rcs
CC=cc
RM=rm -rf
NAME=libft.a

HDR=libft.h

SRC=ft_isalpha.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_isalnum.c\
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_atoi.c\
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c  ft_calloc.c ft_strdup.c\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c  ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter\
	lstmap

OBJ=$(SRC:.c=.o)
OBJBONUS=	$(SRC:.c=.o) $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus: $(OBJBONUS) $(NAME)
	$(AR) libft.a $^

$(OBJ) : $(SRC) $(HDR)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(ARCHIVE)

re: fclean all

# test: re
# 	$(CC) $(CFLAGS) -o libft libft.c -L. -lft -lbsd
# 	./libft

# debug:
# 	gdb ./libft.a

.PHONY: all clean fclean re

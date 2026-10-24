# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/18 22:49:36 by samercad          #+#    #+#              #
#    Updated: 2026/10/24 17:30:00 by samercad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_substr ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup\
ft_strjoin ft_strtrim ft_strmapi ft_striteri ft_itoa ft_split\
ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

OBJ = $(SRC:=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

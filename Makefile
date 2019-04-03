# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/15 16:32:03 by cromo             #+#    #+#              #
#    Updated: 2019/04/02 16:33:34 by cromo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
		  ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
		  ft_strrchr.c


OBJECTS = $(SOURCES:.c=.o)

$(NAME):
	@gcc $(FLAGS) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "[Update] Library created."
	@echo "[Update] Object files created. Linked to library."

all: $(NAME)

clean:
	@rm -f $(OBJECTS)
	@echo "[Update] Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "[Update] Library removed."

re: fclean all


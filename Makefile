# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/15 16:32:03 by cromo             #+#    #+#              #
#    Updated: 2019/03/23 15:00:38 by cromo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_isprint.c\
		  ft_isdigit.c\
		  ft_isalpha.c\
		  ft_isalnum.c\
		  ft_strlen.c\
		  ft_atoi.c\
		  ft_strcpy.c\

OBJECTS = $(SOURCES:.c=.o)

$(NAME):
	@gcc $(FLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJECTS)
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


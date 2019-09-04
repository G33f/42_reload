# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 18:18:50 by wpoudre           #+#    #+#              #
#    Updated: 2019/09/04 21:05:14 by wpoudre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = - Wall -Wextra -Werror

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

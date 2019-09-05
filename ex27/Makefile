# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 18:18:50 by wpoudre           #+#    #+#              #
#    Updated: 2019/09/04 19:05:04 by wpoudre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c

FLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:17:52 by skrairab          #+#    #+#              #
#    Updated: 2022/09/24 02:38:16 by skrairab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c\
		ft_isdigit.c\
		ft_split.c\
		ft_strlcpy.c\
		push_swap.c\
		push_swap_main.c

NAME = push_swap

OBJS = $(SRCS:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -g $(CC_FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -rf $(NAME)
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	rm -rf *.o

re: fclean all

.PHONY: all clean fclean re
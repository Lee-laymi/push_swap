# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ami <ami@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:17:52 by skrairab          #+#    #+#              #
#    Updated: 2022/12/17 23:09:17 by ami              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_split.c\
		push_swap.c\
		checkerror.c\
		ft_free.c\
		ft_basic.c\
		ft_init.c\
		ft_instruction.c\
		ft_setindex.c\
		ft_algorithm_swap.c\
		ft_rotate_rr_rrr.c\
		ft_rotate.c\
		ft_sort_swap.c

NAME = push_swap

OBJS = $(SRCS:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -g $(CC_FLAGS) -o $(NAME) $(SRCS) -g

clean:
	rm -rf $(NAME)
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	rm -rf *.o

re: fclean all

.PHONY: all clean fclean re
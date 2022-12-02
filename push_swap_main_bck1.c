/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main_bck1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:30:40 by skrairab          #+#    #+#             */
/*   Updated: 2022/12/02 21:52:01 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//int		i;
	t_list	*box1;
	t_tower	*tower;

	(void) argc;
	//i = 0;
	box1 = malloc(sizeof(t_list));
	if (box1 == NULL)
		return (0);
	ft_init(box1);
	ft_check_argv(argv, box1);
	ft_checkdouble(box1);
	tower = malloc(sizeof(t_tower));
	if (tower == NULL)
		return (0);
	ft_init_tower(tower);
	tower->a = box1;
	//tower->a = ft_sort_ab(tower, 1, 1);
	ft_push_b(tower);
	ft_push_b(tower);
	//tower->b = ft_sort_ab(tower, 2, 2);
	ft_sort_ss(tower);
	ft_push_a(tower);
	ft_rotate_a(tower);
	while (tower->a)
	{
		printf("tower after a = %d\n", tower->a->num1);
		tower->a = tower->a->next;
	}
	while (tower->b)
	{
		printf("tower after b = %d\n", tower->b->num1);
		tower->b = tower->b->next;
	}
	ft_free(box1);
	
}

void	ft_free(t_list *box1)
{
	t_list	*tmpbox1;

	while (box1)
	{
		tmpbox1 = box1;
		free(tmpbox1);
		box1 = box1->next;
	}
}

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_check_argv(char **argv, t_list *box1)
{	
	char	**num;
	int		i;
	int		j;
	t_list	*lastbox;

	i = 1;
	while (argv[i])
	{
		ft_check_argv_error(argv, box1, i);
		j = 0;
		num = ft_split(argv[i], ' ');
		ft_checkdigit(num, box1);
		while (num[j])
		{
			lastbox = ft_lastbox(box1);
			lastbox->num1 = ft_atoi(num[j], num, box1);
			lastbox->index = -1;
			if (num[j + 1] != NULL)
				ft_addbox(box1);
			j++;
		}
		ft_free_split(num);
		if (argv[i + 1] != NULL)
			ft_addbox(box1);
		i++;
	}	
}

void	ft_print_error(char **num, t_list *box1)
{
	write(2, "Error\n", 6);
	ft_free_split(num);
	ft_free(box1);
	exit (0);
}

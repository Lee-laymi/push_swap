/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:56:57 by skrairab          #+#    #+#             */
/*   Updated: 2022/12/03 00:03:53 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_ab(t_tower *tower, int mode1, int mode2)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	tmp = NULL;
	if (mode1 == 1)
		tmp = tower->a;
	else if (mode1 == 2)
		tmp = tower->b;
	printf("cnt = %d\n", ft_count_box(tmp));
	if (ft_count_box(tmp) > 1)
	{
		//head = tmp
		//tmp = a
		head = tmp;
		last = tmp->next->next;
		tmp = tmp->next;
		tmp->next = head;
		tmp->next->next = last;

		if (mode1 == 1)
			tower->a = tmp;
		else if (mode1 == 2)
			tower->b = tmp;

		// head = tmp->next;
		// tmp->next = tmp->next->next;
		// head->next = tmp;
		// tmp = head;

		// while(tmp)
		// {
		// 	printf("num ---- %d \n", tmp->num1);
		// 	tmp = tmp->next;
		// }
		// tmp_swap1 = tmp;
		// tmp = tmp->next;
		// tmp_swap3 = tmp->next;
		// tmp->next = tmp_swap1;
		// tmp->next->next = tmp_swap3;
		if ((mode1 == 1) && (mode2 == 1))
			write(2, "sa\n", 3);
		else if ((mode1 == 2) && (mode2 == 2))
			write(2, "sb\n", 3);
	}
	// return (tmp);
}

void	ft_sort_ss(t_tower *tower)
{
	if ((ft_count_box(tower->a) > 1) && (ft_count_box(tower->b) > 1))
	{
		ft_sort_ab(tower, 1, 3);
		ft_sort_ab(tower, 2, 3);
		write(2, "ss\n", 3);
	}
}

int	ft_count_box(t_list *tmp)
{
	int		count;
	t_list	*tmp_count;

	count = 0;
	tmp_count = tmp;
	while (tmp_count)
	{
		count++;
		tmp_count = tmp_count->next;
	}
	return (count);
}

void	ft_push_b(t_tower *tower)
{
	t_list	*tmp;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp = NULL;
	tmp_a = NULL;
	tmp_b = NULL;	
	tmp_a = tower->a;
	tmp_b = tower->b;
	tmp = tmp_b;
	tmp_b = tmp_a;
	tmp_a = tmp_a->next;
	tmp_b->next = tmp;
	tower->a = tmp_a;
	tower->b = tmp_b;
		write(2, "pb\n", 3);
}

void	ft_push_a(t_tower *tower)
{
	t_list	*tmp;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp = NULL;
	tmp_a = NULL;
	tmp_b = NULL;
	tmp_a = tower->a;
	tmp_b = tower->b;
	tmp = tmp_a;
	tmp_a = tmp_b;
	tmp_b = tmp_b->next;
	tmp_a->next = tmp;
	tower->a = tmp_a;
	tower->b = tmp_b;
		write(2, "pa\n", 3);
}

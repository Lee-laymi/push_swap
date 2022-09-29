/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:56:57 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/28 17:59:46 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_sort_ab(t_tower *tower, int mode1, int mode2)
{
	t_list	*tmp;
	t_list	*tmp_swap1;
	t_list	*tmp_swap3;

	tmp = NULL;
	if (mode1 == 1)
		tmp = tower->a;	
	else if (mode1 == 2)
		tmp = tower->b;
	if (ft_count_box(tmp) > 1)
	{
		tmp_swap1 = tmp; //box1
		tmp = tmp->next; //box2
		tmp_swap3 = tmp->next; //box3
		tmp->next = tmp_swap1; // 2->1
		tmp->next->next = tmp_swap3; //1->3
		if ((mode1 == 1) && (mode2 == 1))
			write(2, "sa\n", 3);
		else if ((mode1 == 2) && (mode2 == 2))
			write(2, "sb\n", 3);
	}
	return (tmp);
}

void	ft_sort_ss(t_tower *tower)
{
	if ((ft_count_box(tower->a) > 1) && (ft_count_box(tower->b) > 1))
	{
		tower->a = ft_sort_ab(tower, 1, 3);
		tower->b = ft_sort_ab(tower, 2, 3);
		write(2, "ss\n", 3);
	}
}

int		ft_count_box(t_list *tmp)
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
	//printf("count = %d\n", count);
	return (count);
}

void	ft_push_b(t_tower *tower)
{
	t_list	*tmp;
	t_list	*tmp_a;
	t_list	*tmp_b;
	//t_tower *head1 = NULL;
	//t_tower *head2 = NULL;

	tmp = NULL;
	tmp_a = NULL;
	tmp_b = NULL;
	//head1 = tower;

	//if (mode == 1)
	//{	
		tmp_a = tower->a; //box1 b
		tmp_b = tower->b;//tmpb
		//tower->b = tmp; // box1 in b
		tmp = tmp_b;
		tmp_b = tmp_a;
		tmp_a = tmp_a->next;
		tmp_b->next = tmp;
		tower->a = tmp_a;
		tower->b = tmp_b;

		//if ((mode1 == 1) && (mode2 == 1))
			write(2, "pb\n", 3);

// printf("head after a = %d\n", head1->a->num1);
// 		while (head1->a)
// 	{
// 		printf("head after a = %d\n", head1->a->num1);
// 		head1->a = head1->a->next;
// 	}
// 	while (head1->b)
// 	{
// 		printf("head after b = %d\n", head1->b->num1);
// 		head1->b = head1->b->next;
// 	}

		//tmp_b->next = tmp_b;
	// while (tmp_a)
	// {
	// 	printf("tower after a = %d\n", tmp_a->num1);
	// 	tmp_a = tmp_a->next;
	// }
	// while (tmp_b)
	// {
	// 	printf("tower after b = %d\n", tmp_b->num1);
	// 	tmp_b = tmp_b->next;
	// }
	//exit(0);


	//}

}
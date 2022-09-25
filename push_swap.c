/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:15:17 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/24 05:02:54 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkdouble(t_list *inbox)
{
	t_list		*tmp;
	t_list		*tmp2;
	int			len;

	tmp = inbox;
	while (tmp)
	{
		tmp2 = tmp;
		len = 0;
		while (tmp2)
		{
			if (tmp->num1 == tmp2->num1)
				len++;
			tmp2 = tmp2->next;
		}
		if (len > 1)
		{
			write(2, "Error\n", 6);
			ft_free(inbox);
			exit (0);
		}
		tmp = tmp->next;
	}
}

void	ft_init(t_list *box1)
{
	box1->num1 = 0;
	box1->next = NULL;
}

void	ft_addbox(t_list *box)
{
	t_list		*temp;
	t_list		*new_box;

	new_box = malloc(sizeof(t_list));
	if (new_box == NULL)
		return ;
	ft_init(new_box);
	temp = box;
	while (temp)
	{
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
	temp->next = new_box;
}

t_list	*ft_lastbox(t_list *box1)
{
	t_list	*temp;

	temp = box1;
	while (temp)
	{
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
	return (temp);
}

void	ft_checkdigit(char **num, t_list *box1)
{
	int		c;
	int		d;

	c = 0;
	while (num[c])
	{
		d = 0;
		while (num[c][d])
		{
			if (num[c][d] == '-' && (num[c][d + 1] < 48 || num[c][d + 1] > 57))
				ft_print_error(num, box1);
			else if ((num[c][d] < 48 || num[c][d] > 57) && num[c][d] != ' ' \
					&& num[c][d] != '-')
				ft_print_error(num, box1);
			d++;
		}
		c++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:22:48 by ami               #+#    #+#             */
/*   Updated: 2022/12/30 20:49:58 by skrsirab         ###   ########.fr       */
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
		ft_checkdigit(num);
		while (num[j])
		{
			lastbox = ft_lastbox(box1);
			lastbox->num1 = ft_atoi(num[j], num, box1);
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

void	ft_checkdigit(char **num)
{
	int		c;
	int		d;

	c = 0;
	while (num[c])
	{
		d = 0;
		while (num[c][d])
		{
			if (num[c][d] == '-' && num[c][d] == '+' && (num[c][d + 1] < 48
					|| num[c][d + 1] > 57))
				ft_print_error();
			else if ((num[c][d] < 48 || num[c][d] > 57) && num[c][d] != ' ' \
					&& num[c][d] != '-' && num[c][d] != '+')
				ft_print_error();
			d++;
		}
		c++;
	}
}

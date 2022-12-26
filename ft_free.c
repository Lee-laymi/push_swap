/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:25:38 by ami               #+#    #+#             */
/*   Updated: 2022/12/17 22:13:50 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_atoi_error(char **num, t_list *box1)
{
	ft_free_split(num);
	ft_free(box1);
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_check_argv_error(char **argv, t_list *box1, int i)
{
	if (argv[i][0] == '\0')
	{
		ft_free(box1);
		exit (0);
	}
}

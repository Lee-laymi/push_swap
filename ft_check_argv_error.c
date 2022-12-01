/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv_error.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:53:54 by skrairab          #+#    #+#             */
/*   Updated: 2022/12/01 21:22:04 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_argv_error(char **argv, t_list *box1, int i)
{
	if (argv[i][0] == '\0')
	{
		ft_free(box1);
		exit (0);
	}
}

void	ft_init_tower(t_tower *tower)
{
	tower->a = NULL;
	tower->b = NULL;
}

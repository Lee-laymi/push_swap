/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:05:49 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/24 05:07:10 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str, char **num, t_list *box1)
{
	int			i;
	int			sign;
	long int	value;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	value = 0;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		value *= 10;
		value += str[i++] - '0';
	}
	value *= sign;
	if (value < -2147483648 || value > 2147483647)
		ft_atoi_error(num, box1);
	return ((int)value);
}

void	ft_atoi_error(char **num, t_list *box1)
{
	ft_free_split(num);
	ft_free(box1);
	write(2, "Error\n", 6);
	exit (0);
}

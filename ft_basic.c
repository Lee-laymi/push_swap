/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:35:38 by ami               #+#    #+#             */
/*   Updated: 2022/12/17 22:51:08 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < (destsize - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (i < destsize)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	return (0);
}

int	ft_atoi(const char *str, char **num, t_list *box1)
{
	int			i;
	int			sign;
	long int	value;

	i = 0;
	//printf("str[i] == %s\n", str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	value = 0;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i++] == '-')
			sign = -1;
		//printf("str[i] == %c\n", str[i]);
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
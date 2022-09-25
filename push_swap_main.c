/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:30:40 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/25 16:59:47 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*box1;

	(void) argc;
	i = 0;
	box1 = malloc(sizeof(t_list));
	if (box1 == NULL)
		return (0);
	ft_init(box1);
	ft_check_argv(argv, box1);
	ft_checkdouble(box1);
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
		if (argv[i][0] == '\0')
		{
			ft_free(box1);
			exit (0);
		}
		j = 0;
		num = ft_split(argv[i], ' ');
		ft_checkdigit(num, box1);
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

void	ft_print_error(char **num, t_list *box1)
{
	write(2, "Error\n", 6);
	ft_free_split(num);
	ft_free(box1);
	exit (0);
}

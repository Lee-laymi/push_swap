/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:15:17 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/22 02:59:15 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{	
	char	**num;
	int		i;
	int		j;
	t_list	*box1;
	t_list	*lastbox;

	i = 0;
	box1 = malloc(sizeof(t_list));
	if (box1 == NULL)
		return (0);
	ft_init(box1);
	// printf("box1 = %d\n",box1->num1);
	// // while (i < 10)
	// {
	// 	ft_addbox(box1);
	// 	i++;
	// }
	//i = 0;
	// while (box1)
	// {
	// 	i++;
	// 	if (box1->next == NULL)
	// 		break;
	// 	box1 = box1->next;
	// }
	// printf("i = %d\n", i);

	i = 1;
	while (argv[i])
	{
		j = 0;
		num = ft_split(argv[i], ' ');
		while (num[j])
		{
			lastbox = ft_lastbox(box1);
		 	lastbox->num1 = ft_atoi(num[j]);
			if (num[j+1] != NULL)
				ft_addbox(box1);
			j++;
		}
		if (argv[i+1] != NULL)
				ft_addbox(box1);
		i++;

	}
	while (box1)
	{
		printf("i = %d\n", box1->num1);
		if (box1->next == NULL)
			break;
		box1 = box1->next;
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
		return;
	ft_init(new_box);
	temp = box;
	while (temp)
	{
		if (temp->next == NULL)
			break;
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
			break;
		temp = temp->next;
	}
	return (temp);
}




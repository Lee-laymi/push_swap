/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:11:37 by ami               #+#    #+#             */
/*   Updated: 2022/12/17 14:12:38 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

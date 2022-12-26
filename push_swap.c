/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:34:13 by ami               #+#    #+#             */
/*   Updated: 2022/12/17 23:49:29 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char **argv)
{
    t_list  *box1;
    t_tower     *tower;
    (void) argc;
   // (void) argv;
    
    box1 = malloc(sizeof(t_list));
    if (box1 == NULL)
		return (0);
    ft_init(box1);
    //printf("Hello \n");
    ft_check_argv(argv, box1);
    ft_checkdouble(box1);
    ft_setindex(box1);
    tower = malloc(sizeof(t_tower));
	  if (tower == NULL)
		  return (0);
	  ft_init_tower(tower);
   // ft_algorithm_swap(tower);
    ft_rotate_a(tower);
    // while (box1)
    // {
    //   printf("box1 = %d\n", box1->num1);
    //   box1 = box1->next;
    // }
    // while (box1)
    // {
    //   printf("box1 = %d\n", box1->index);
    //   box1 = box1->next;
    // }
   
}
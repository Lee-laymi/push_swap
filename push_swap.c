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
    (void) argv;

    box1 = malloc(sizeof(t_list));
    if (box1 == NULL)
		return (0);
    ft_init(box1);
    ft_check_argv(argv, box1);
    ft_checkdouble(box1);
    ft_setindex(box1);

    tower = malloc(sizeof(t_tower));
	  if (tower == NULL)
		  return (0);
	  ft_init_tower(tower);
    tower->a = box1;

    //printf(" tower a = %d\n", tower->a->num1);

    // exit(0);

	
	// while (tower->b)
	// {
	// 	printf("tower after b = %d\n", tower->b->num1);
	// 	tower->b = tower->b->next;
	// }
	// ft_free(box1);

    // ft_algorithm_swap(tower);
//     while (tower->a)
// 	{
// 		printf("tower after a = %d\n", tower->a->num1);
// 		tower->a = tower->a->next;
// 	}
//    return (0);

    ft_algorithm_swap(tower);
    //ft_sort5(tower);


    while(tower->a)
    {
        printf("num a ---- %d \n", tower->a->num1);
        tower->a = tower->a->next;
    }
    // while(tower->b)
    // {
    //     printf("num b ---- %d \n", tower->b->num1);
    //     tower->b = tower->b->next;
    // }



    // while(tower->a)
    // {
    //     printf("num %d \n", tower->a->num1);
    //     tower->a = tower->a->next;
    // }

    //ft_rotate_a(tower);


//     while (tower->a)
// 	{
// 		printf("tower after a = %d\n", tower->a->num1);
// 		tower->a = tower->a->next;
// 	}
//    return (0);


}
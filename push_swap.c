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

    tower = NULL;
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
     // exit(0);
    tower->a = box1;
    //printf("Hello");
    tower->lenv = ft_count_box(tower->a);
   // printf("tower len view %d\n", tower->lenv);
    if (tower->lenv == 1)
        
    if (tower->lenv == 2)
        {
            if ((tower->a->num1) > (tower->a->next->num1))
                ft_sort_ab(tower, 1, 1);
        }
    if (tower->lenv == 3)
        ft_sort3(tower);
    else if (tower->lenv <= 5)
        ft_sort5(tower);
    else
    {
        ft_algorithm_swap(tower);
    }
    
    //printf(" tower a = %d\n", tower->a->num1);
    // exit(0);
	// while (tower->b)
	// {
	// 	printf("tower after b = %d\n", tower->b->num1);
	// 	tower->b = tower->b->next;
	// }
	// ft_free(box1);

    // ft_algorithm_swap(tower);
    // while (tower->a)
	// {
	// 	printf("tower after a = %d\n", tower->a->num1);
	// 	tower->a = tower->a->next;
	// }
//    return (0);

    //ft_sort5(tower);

    // while(tower->a)
    // {
    //     printf("num a ---- %d \n", tower->a->num1);
    //     tower->a = tower->a->next;
    // }
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
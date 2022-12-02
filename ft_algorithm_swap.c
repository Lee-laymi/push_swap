#include "push_swap.h"

int    ft_checklineup(t_tower *tower)
{
    t_list  *tmp_a;
    int count_box;

    count_box = ft_count_box(tower->b);
    if (count_box != 0)
        return (1);
    tmp_a = tower -> a;
    while (tmp_a)
        {
            if (tmp_a -> next == NULL)
                break;
            if (tmp_a->index > tmp_a->next->index)
                return (1);
            tmp_a = tmp_a -> next;
        }
        return (0);
}


void    ft_algorithm_swap(t_tower *tower)
{
    int count_box;
    int i;
    int j;

    i = 0;
    while ( i < 8 && ft_checklineup(tower) == 1)
    {
         j = 0;
        count_box = ft_count_box(tower->a);
        while (j < count_box)
        {
            if (((tower->a->index >> i) % 2) == 0 )
                ft_push_b(tower);
            else 
                ft_rotate_a(tower);
        j++;
        }
        count_box = ft_count_box(tower->b);
        j = 0;
        while ( j < count_box )
        {
            ft_push_a(tower);
            j++;
        }
        i++;
    }
}


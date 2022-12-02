#include "push_swap.h"

void    ft_setindex(t_list *stack)
{
    t_list  *tmp_stack;
    int i;

    tmp_stack = ft_getnextmin(stack);
    i = 0;
    while (tmp_stack)
    {
        tmp_stack->index = i++;
        tmp_stack = ft_getnextmin(stack);
    }
}

t_list *ft_getnextmin(t_list *stack)
{
    t_list  *tmp_stack;
    t_list  *min;
    int had_min;

    min = NULL;
    tmp_stack = stack;
    had_min = 1;
    while (tmp_stack)
        {
            if ((tmp_stack -> index == -1) && (had_min || tmp_stack -> num1 < min -> num1))
            {
                min = tmp_stack;
                had_min = 0;
            }
            tmp_stack = tmp_stack -> next;
        }
        return(min);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrsirab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:50:28 by skrsirab          #+#    #+#             */
/*   Updated: 2022/12/30 20:51:27 by skrsirab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    while ( i < 16 && ft_checklineup(tower) == 1)
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

void    ft_sort3(t_tower *tower)
{
    t_tower     *tmp;
    int      tmp1;
    int      tmp2;
    int      tmp3;
    
    tmp = tower;
    tmp1 = tower->a->num1;
    tmp2 = tower->a->next->num1;
    tmp3 = tower->a->next->next->num1;

    if ((tmp1 > tmp2) && (tmp3 > tmp2) && (tmp3 > tmp1))
        ft_sort_ab(tower, 1, 1);
    if ((tmp1 > tmp2) && (tmp3 < tmp2) && (tmp3 < tmp1))
    {
        ft_sort_ab(tower, 1, 1);
    }
    if ((tmp1 < tmp2) && (tmp3 < tmp2) && (tmp3 > tmp1))
    {
        ft_sort_ab(tower, 1, 1);
    }
    tmp = tower;
    tmp1 = tower->a->num1;
    tmp2 = tower->a->next->num1;
    tmp3 = tower->a->next->next->num1;
    if ((tmp1 > tmp2) && (tmp3 > tmp2) && (tmp3 < tmp1))
        ft_rotate_a(tower);
    if ((tmp1 < tmp2) && (tmp3 < tmp2) && (tmp3 < tmp1))
        ft_rotate_rra(tower);
}

void    ft_sort5(t_tower *tower)
{
    t_list     *tmp;

    tmp = NULL;
    tmp = tower->a;

    if (tower->lenv == 4)
    {
        ft_findmin(tower, tmp,1);
        ft_sort3(tower);
        ft_push_a(tower);
    }

    if (tower->lenv == 5)
    {
        ft_findmin(tower, tmp, 2);
        ft_sort3(tower);
        ft_push_a(tower);
        ft_push_a(tower);
    }
}

void ft_findmin(t_tower *tower, t_list *tmp, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        tmp = tower->a;
        if (tmp->index == i)
        {
            ft_push_b(tower);
            i++;
        }
        else if (tmp->next->index == i)
            ft_sort_ab(tower, 1, 1);
        else
            ft_rotate_rra(tower);
    }
}

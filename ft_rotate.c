#include "push_swap.h"

void  ft_rotate_a(t_tower *tower)
{
    t_list	*tmp; 
	t_list	*tmp_1;
    t_list  *tmp_2;

	
    tmp = NULL;
	tmp_1 = NULL;
    tmp_2 = NULL;
	
    tmp_1 = tower->a;
	
	tmp = tmp_1; 
	printf("tmp->next == %d\n", tower->a->num1);
	//printf("tmp->next == %c\n", tmp_2->num1);
	// exit(0);
	tmp_2 = tmp->next;
	//exit(0);
	while (tmp)
	{
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}
	tmp -> next = tmp_1;
	tmp_1 -> next = NULL;
	tower -> a = tmp_2;
	write(2, "ra\n", 3);
}

void  ft_rotate_b(t_tower *tower)
{
    t_list	*tmp; 
	t_list	*tmp_1;
    t_list  *tmp_2;

    tmp = NULL;
	tmp_1 = NULL;
    tmp_2 = NULL;
    tmp_1 = tower->b;
	tmp = tmp_1; 
	tmp_2 = tmp -> next;
	while (tmp)
	{
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}
	tmp -> next = tmp_1;
	tmp_1 -> next = NULL;
	tower -> b = tmp_2;
	write(2, "rb\n", 3);
}

void  ft_rotate_rra(t_tower *tower)
{
	t_list	*tmp; 
	t_list	*tmp_h;
    t_list  *tmp_f;

    tmp = NULL;
	tmp_h = NULL;
    tmp_f = NULL;
    tmp_h = tower->a;
	tmp = tmp_h; 
	while (tmp)
	{
		if (tmp->next->next == NULL)
			break;
			
		tmp = tmp->next;
	}
	tmp_f = tmp -> next;
	tmp_f->next = tmp_h; 
	tmp->next = NULL;
	tower -> a = tmp_f;
	write(2, "rra\n", 4);
}

void  ft_rotate_rrb(t_tower *tower)
{
	t_list	*tmp; 
	t_list	*tmp_h;
    t_list  *tmp_f;

    tmp = NULL;
	tmp_h = NULL;
    tmp_f = NULL;
    tmp_h = tower->b;
	tmp = tmp_h; 
	while (tmp)
	{
		if (tmp->next->next == NULL)
			break;
			
		tmp = tmp->next;
	}
	tmp_f = tmp -> next;
	tmp_f->next = tmp_h; 
	tmp->next = NULL;
	tower -> b = tmp_f;
	write(2, "rrb\n", 4);
}

// void	ft_findmin(t_tower *tower)
// {
// 	t_tower	*tmp;

// 	tmp = NULL;
// 	tmp = tower->a;




// }
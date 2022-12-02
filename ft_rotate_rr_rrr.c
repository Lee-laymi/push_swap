#include "push_swap.h"

void  ft_rotate_rr(t_tower *tower)
{
	ft_rotate_a(tower);
	ft_rotate_b(tower);
	write(2, "rr\n", 3);
}

void  ft_rotate_rrr(t_tower *tower)
{
	ft_rotate_rra(tower);
	ft_rotate_rrb(tower);
	write(2, "rrr\n", 4);
}
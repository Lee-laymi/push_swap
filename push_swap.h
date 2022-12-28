/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ami <ami@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:16:15 by skrairab          #+#    #+#             */
/*   Updated: 2022/12/17 23:11:51 by ami              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int					num1;
	int					index;
	struct s_list		*next;
}						t_list;

typedef	struct s_variable
{
	int		min;
	int		max;
	int		medium;
}						t_var;
 
typedef struct s_tower
{
	t_list	*a;
	t_list	*b;
	t_var	var;
}						t_tower;



void	ft_init(t_list *box1);
void	ft_checkdouble(t_list *inbox);
void	ft_check_argv(char **argv, t_list *box1);
int		ft_isdigit(int c);
void	ft_atoi_error(char **num, t_list *box1);
void	ft_free(t_list *box1);
void	ft_free_split(char **str);
void	ft_print_error(void);
size_t	ft_strlcpy(char *dst, const char *src, size_t destsize);
int		ft_atoi(const char *str, char **num, t_list *box1);
char	**ft_split(char const *s, char c);
void	ft_check_argv_error(char **argv, t_list *box1, int i);
void	ft_init_tower(t_tower *tower);
void	ft_checkdigit(char **num); //, t_list *box1);
void	ft_addbox(t_list *box);
t_list	*ft_lastbox(t_list *box1);
void	ft_addbox(t_list *box);
void    ft_setindex(t_list *stack);
t_list *ft_getnextmin(t_list *stack);
int    ft_checklineup(t_tower *tower);
void    ft_algorithm_swap(t_tower *tower);
void  ft_rotate_rr(t_tower *tower);
void  ft_rotate_rrr(t_tower *tower);
void  ft_rotate_a(t_tower *tower);
void  ft_rotate_b(t_tower *tower);
void  ft_rotate_rra(t_tower *tower);
void  ft_rotate_rrb(t_tower *tower);
void	ft_sort_ab(t_tower *tower, int mode1, int mode2);
void	ft_sort_ss(t_tower *tower);
int	ft_count_box(t_list *tmp);
void	ft_push_b(t_tower *tower);
void	ft_push_a(t_tower *tower);
void    ft_sort3(t_tower *tower);
void    ft_sort5(t_tower *tower);
void ft_findmin(t_tower *tower, t_list *tmp, int n);


#endif
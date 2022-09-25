/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrairab <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:16:15 by skrairab          #+#    #+#             */
/*   Updated: 2022/09/24 05:01:49 by skrairab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


typedef struct s_list
{
	int		num1;
	struct s_list	*next;
}					t_list;


char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t destsize);
int	ft_atoi(const char *str, char **num, t_list *box1);
int	ft_isdigit(int c);
void	ft_init(t_list *box1);
void	ft_addbox(t_list *box);
t_list	*ft_lastbox(t_list *box1);
void	ft_checkdigit(char **num, t_list *box1);
void	ft_checkdouble(t_list *inbox);
void	ft_check_argv(char **argv, t_list *box1);
void	ft_free(t_list *box1);
void	ft_free_split(char **str);
void	ft_atoi_error(char **num, t_list *box1);
void	ft_print_error(char **num, t_list *box1);
//void	ft_check_argv2(char *argv,t_list *box1);

#endif
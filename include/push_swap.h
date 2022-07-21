/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:21:54 by memam             #+#    #+#             */
/*   Updated: 2022/06/22 09:49:08 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}			t_stack;

/******************************  obtenir_tab         **************************/
int		*obtenir_array(t_stack *stack, int size);
int		*sort_tab(t_stack **stack, int siz);

/******************************   ft_free            **************************/
void	free_tab(char **tab);
void	free_stack(t_stack **stack);
void	ft_error(t_stack **stack_a);

/******************************  Check et check_args  *************************/

int		obtenir_stack(char **argv, t_stack **stack_a, int argc);
int		creat_stack(int agc, char **agv);
int		duplicates_check_nbr(t_stack **stack, int size);
int		check_nbr(char *str);
int		ft_sorted(t_stack **stack_a);
int		check_len(char *str);
int		check_max_int(char *str);

/******************************   utils      **********************************/

int		ft_isdigit(int nbr);
int		ft_str_isdigit(char *str);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
void	ft_putendl_fd(char *s, int fd);

/******************************   operations   ********************************/

void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	push_from_b(t_stack **stack_b, t_stack **stack_a);
void	push_from_a(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack);
void	reverse_rotate_rra(t_stack **stack_a);
void	reverse_rotate_rra(t_stack **stack_b);
void	reverse_rotate_rrr(t_stack **stack_a, t_stack **stack_b);

/******************************   sort   **********************************/

void	smole_sort(t_stack **stack_a, t_stack **stack_b, int len);
void	algo_3(t_stack **stack);
void	rev_min(t_stack **stack_a, int size);
void	algo_4(t_stack **stack_a, t_stack **stack_b, int size);
void	algo_5(t_stack **stack_a, t_stack **stack_b, int size);

/**************   big_algo      ***************/

void	radix_sorte(t_stack **stack_a, t_stack **stack_b, int size);

/******************************   bits      ********************************/
int		check_bit(int num, int i);
int		get_bits(int max_n);
void	bits_to_bits(t_stack **stack_a, t_stack **stack_b, int bits, int size);
#endif

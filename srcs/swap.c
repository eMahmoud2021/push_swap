/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                       :+:      :+:    :+:   	  */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:06 by memam             #+#    #+#             */
/*   Updated: 2022/06/03 16:13:22 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swap_a(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (!(tmp && tmp->next))
		return ;
	else
		ft_swap(&tmp->data, &tmp->next->data);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	if (!(tmp && tmp->next))
		return ;
	else
		ft_swap(&tmp->data, &tmp->next->data);
	ft_putendl_fd("sb", 1);
}

void	ft_swap_a_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *stack_a;
	tmp2 = *stack_b;
	if (!(tmp1 && tmp1->next))
		return ;
	else
		ft_swap(&tmp1->data, &tmp1->next->data);
	if (!(tmp2 && tmp2->next))
		return ;
	else
		ft_swap(&tmp2->data, &tmp2->next->data);
	ft_putendl_fd("ss", 1);
}

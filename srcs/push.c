/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:19:01 by memam             #+#    #+#             */
/*   Updated: 2022/06/22 09:51:00 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_from_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*to;
	t_stack	*from;

	to = *stack_b;
	from = *stack_a;
	if (!from)
		return ;
	tmp = from;
	from = from->next;
	*stack_a = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*stack_b = to;
	}
	else
	{
		tmp->next = to;
		*stack_b = tmp;
	}
	ft_putendl_fd("pb", 1);
}

void	push_from_b(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*to_a;
	t_stack	*from_b;

	to_a = *stack_a;
	from_b = *stack_b;
	if (!from_b)
		return ;
	tmp = from_b;
	from_b = from_b->next;
	*stack_b = from_b;
	if (!to_a)
	{
		to_a = tmp;
		to_a->next = NULL;
		*stack_a = to_a;
	}
	else
	{
		tmp->next = to_a;
		*stack_a = tmp;
	}
	ft_putendl_fd("pa", 1);
}

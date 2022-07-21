/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:34:43 by memam             #+#    #+#             */
/*   Updated: 2022/06/14 17:24:43 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	finde_min(t_stack **stack)
{
	int		i;
	int		a;
	int		min;
	t_stack	*tmp;

	i = 0;
	min = 0;
	tmp = *stack;
	a = tmp->data;
	while (tmp)
	{
		if (tmp->data < a)
		{
			a = tmp->data;
			min = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (min);
}

void	rev_min(t_stack **stack_a, int size)
{
	int	i;
	int	min;

	i = 0;
	min = finde_min(stack_a);
	if (min <= size / 2)
	{
		while (i != min)
		{
			rotate_a(stack_a);
			i++;
		}
	}
	else
	{
		while (i != size - min)
		{
			reverse_rotate_rra(stack_a);
			i++;
		}
	}
}

void	algo_4(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (i < 1)
	{
		rev_min(stack_a, size);
		size = size - 1;
		i++;
		push_from_a(stack_a, stack_b);
	}
	algo_3(stack_a);
	push_from_b(stack_b, stack_a);
}

void	algo_5(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		rev_min(stack_a, size);
		size = size - 1;
		i++;
		push_from_a(stack_a, stack_b);
	}
	algo_3(stack_a);
	push_from_b(stack_b, stack_a);
	push_from_b(stack_b, stack_a);
}

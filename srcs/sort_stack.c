/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:02:17 by memam             #+#    #+#             */
/*   Updated: 2022/06/22 09:51:38 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	smole_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (size == 2)
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_a(stack_a);
	}
	else if (size == 3)
		algo_3(stack_a);
	else if (size == 4)
		algo_4(stack_a, stack_b, size);
	else if (size == 5)
		algo_5(stack_a, stack_b, size);
}

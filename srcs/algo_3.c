/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:06 by memam             #+#    #+#             */
/*   Updated: 2022/06/22 09:46:45 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algo_3(t_stack **stack)
{
	if ((*stack)->data > (*stack)->next->data && (*stack)->next->next->data < \
	(*stack)->data && (*stack)->next->data > (*stack)->next->next->data)
	{
		rotate_a(stack);
		swap_a(stack);
	}
	else if ((*stack)->data < (*stack)->next->data && (*stack)->next->next->\
	data < (*stack)->data && (*stack)->next->data > (*stack)->next->next->data)
	{
		reverse_rotate_rra(stack);
	}
	else if ((*stack)->data > (*stack)->next->data && (*stack)->next->next->\
	data < (*stack)->data && (*stack)->next->data < (*stack)->next->next->data)
		rotate_a(stack);
	else if ((*stack)->data < (*stack)->next->data && (*stack)->next->next->\
	data > (*stack)->data && (*stack)->next->data > (*stack)->next->next->data)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if ((*stack)->data > (*stack)->next->data && (*stack)->next->next->\
	data > (*stack)->data && (*stack)->next->data < (*stack)->next->next->data)
		swap_a(stack);
}

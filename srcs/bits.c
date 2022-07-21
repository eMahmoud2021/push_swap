/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:28:52 by memam             #+#    #+#             */
/*   Updated: 2022/06/21 22:58:08 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_bit(int num, int i)
{
	return ((num >> i) & 1);
}

int	get_bits(int max_n)
{
	int	i;

	i = 31;
	while (check_bit(max_n, i) != 1)
			i--;
	return (i);
}

void	bits_to_bits(t_stack **stack_a, t_stack **stack_b, int bits, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (check_bit((*stack_a)->index, bits) == 0)
			push_from_a(stack_a, stack_b);
		else
			rotate_a(stack_a);
		if (ft_sorted(stack_a))
			break ;
		i++;
	}
}

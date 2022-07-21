/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bige_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:26:24 by memam             #+#    #+#             */
/*   Updated: 2022/06/21 23:40:14 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	int	*sort_tab2(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	while (++i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			tmp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
	}
	return (tab);
}

static	void	put_index(t_stack **stack_a, int *tab, int size)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		i = -1;
		while (++i < size)
		{
			if (tab[i] == tmp->data)
				tmp->index = i;
		}
		tmp = tmp->next;
	}
}

static	void	get_index(t_stack **stack_a, int size)
{
	int		i;
	int		*tab;
	t_stack	*tmp;

	i = -1;
	tmp = *stack_a;
	tab = (int *)malloc(sizeof(int) + 1);
	if (!tab)
		exit (0);
	while (tmp)
	{
		tab[++i] = tmp->data;
		tmp = tmp->next;
	}
	tab = sort_tab2(tab, size);
	put_index(stack_a, tab, size);
	free(tab);
}

void	radix_sorte(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		i;
	int		num_bits;

	i = 0;
	get_index(stack_a, size);
	num_bits = get_bits(size);
	while (i <= num_bits)
	{
		bits_to_bits(stack_a, stack_b, i, size);
		while (*stack_b)
			push_from_b(stack_b, stack_a);
		i++;
	}
}

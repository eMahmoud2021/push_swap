/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obtenir_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:32:32 by memam             #+#    #+#             */
/*   Updated: 2022/06/08 21:38:22 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*obtenir_array(t_stack *stack, int size)
{
	t_stack		*tmp;
	int			*tab;
	int			i;

	tmp = stack;
	i = 0;
	tab = malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (tmp)
	{
		tab[i++] = tmp->data;
		tmp = tmp->next;
	}
	return (tab);
}

int	*sort_tab(t_stack **stack, int size)
{
	t_stack	*tmp;
	int		*tab;
	int		tmp1;
	int		i;

	tmp = *stack;
	tab = obtenir_array(tmp, size);
	i = 0;
	while (size > 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp1 = tab[i + 1];
				tab[i + 1] = tab [i];
				tab[i] = tmp1;
			}
			i++;
		}
		size--;
		i = 0;
	}
	return (tab);
}

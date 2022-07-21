/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 05:59:36 by memam             #+#    #+#             */
/*   Updated: 2022/07/19 14:36:50 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tem;
	t_stack	*del;

	tem = *stack;
	while (tem)
	{
		del = tem;
		tem = tem->next;
		free(del);
	}
	*stack = NULL;
}

void	ft_error(t_stack **stack_a)
{
	free_stack(stack_a);
	write(2, "Error\n", 6);
	exit (0);
}

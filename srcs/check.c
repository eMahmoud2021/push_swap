/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:34:29 by memam             #+#    #+#             */
/*   Updated: 2022/06/16 13:57:23 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (0);
		i++;
	}
	if ((i > 1 && !ft_isdigit(str[1])) || (i == 1 && !ft_isdigit(str[0])))
		return (0);
	return (1);
}

int	duplicates_check_nbr(t_stack **stack, int size)
{
	int	*tab;
	int	i;

	tab = sort_tab(stack, size);
	i = 0;
	while (i < size)
	{
		if (tab[i] == tab[i + 1])
		{
			free(tab);
			return (1);
		}
		i++;
	}
	free (tab);
	return (0);
}

int	ft_sorted(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (!(tmp->data < tmp->next->data))
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

int	check_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i > 11)
		return (1);
	return (0);
}

int	check_max_int(char *str)
{
	if (str[0] == '-')
	{
		if (ft_atoi(str) > 0)
			return (1);
	}
	else if (str[0] != '-')
	{
		if (ft_atoi(str) < 0)
			return (1);
	}
	return (0);
}

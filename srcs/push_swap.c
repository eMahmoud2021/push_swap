/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 23:23:16 by memam             #+#    #+#             */
/*   Updated: 2022/07/19 14:39:11 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		ft_printf("%d | %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	size = 0;
	if ((argc - 1) < 1)
		exit (0);
	size = obtenir_stack(argv, &stack_a, argc);
	if (duplicates_check_nbr(&stack_a, size))
		ft_error(&stack_a);
	stack_b = 0;
	if (ft_sorted(&stack_a))
		return (0);
	if (size <= 5)
		smole_sort(&stack_a, &stack_b, size);
	if (size >= 6)
		radix_sorte(&stack_a, &stack_b, size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

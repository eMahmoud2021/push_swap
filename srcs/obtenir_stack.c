/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obtenir_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 05:36:14 by memam             #+#    #+#             */
/*   Updated: 2022/06/22 09:50:10 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*create_new_node(void)
{
	t_stack	*first;

	first = (t_stack *)malloc(sizeof(t_stack));
	first->data = 0;
	first->next = NULL;
	first->index = 0;
	return (first);
}

static int	check_argv(t_stack **stack_a, char **array)
{
	t_stack	*tmp;
	int		size;

	size = 0;
	*stack_a = create_new_node();
	tmp = *stack_a;
	while (array[size])
	{
		if (!(check_nbr(array[size])) || check_len (array[size]) || \
		check_max_int(array[size]))
			ft_error(stack_a);
		tmp->data = ft_atoi(array[size]);
		if (array[size + 1])
		{
			tmp->next = create_new_node();
			tmp = tmp->next;
		}
		size++;
	}
	return (size);
}

static int	check_argv_1(t_stack **stack_a, char **args, int argc)
{
	int		i;
	t_stack	*tmp;
	int		size;

	*stack_a = create_new_node();
	tmp = *stack_a;
	i = 1;
	size = argc - 1;
	while (i <= size)
	{
		if ((!check_nbr(args[i])) || check_len(args[i]) || \
		check_max_int(args[i]))
			ft_error(stack_a);
		tmp->data = ft_atoi(args[i]);
		if (i < size)
		{
			tmp->next = create_new_node();
			tmp = tmp->next;
		}
		i++;
	}
	return (size);
}

int	obtenir_stack(char **argv, t_stack **stack_a, int argc)
{
	char	**tab	;
	int		size;

	size = 0;
	tab = NULL;
	if (argv[1] && argv[2] && ft_strchr(argv[1], ' ')
		&& ft_strchr(argv[2], ' '))
		ft_error(stack_a);
	tab = ft_split(argv[1], ' ');
	if (tab[1])
		size = check_argv(stack_a, tab);
	else if (!tab[1])
		size = check_argv_1(stack_a, argv, argc);
	free_tab(tab);
	return (size);
}

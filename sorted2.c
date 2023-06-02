/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 01:31:08 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 22:12:49 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_rule(char str, int rule)
{
	if (rule == 1 && str == 'a')
		write(1, "pa\n", 3);
	else if (rule == 1 && str == 'b')
		write(1, "pb\n", 3);
}

void	ft_sort(t_swap *stack)
{
	int	max_index;

	while (stack->size_b)
	{
		max_index = max_pos(stack);
		if (max_index >= stack->size_b / 2)
			while (max_pos(stack) != stack->size_b - 1)
				rb(stack, 1);
		else
			while (max_pos(stack) != stack->size_b - 1)
				rrb(stack, 1);
		pa(stack, 1);
	}
}

int	sorted(t_swap *stack)
{
	int	i;

	i = stack->size_a - 1;
	while (i)
	{
		if (!(stack->stack_a[i] < stack->stack_a[i - 1]))
			return (0);
		i--;
	}
	return (1);
}

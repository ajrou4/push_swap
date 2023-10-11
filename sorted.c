/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:02:25 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 18:32:19 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_more(t_swap *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2]
		&& stack->stack_a[2] > stack->stack_a[1])
	{
		sa(stack, 1);
	}
	else if (stack->stack_a[0] > stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2]
		&& stack->stack_a[2] > stack->stack_a[1])
	{
		ra(stack, 1);
	}
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack, 1);
	}
}

void	sort_3(t_swap *stack)
{
	sort_more(stack);
	if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] > stack->stack_a[2]
		&& stack->stack_a[1] > stack->stack_a[2])
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (stack->stack_a[0] < stack->stack_a[1]
		&& stack->stack_a[0] < stack->stack_a[2]
		&& stack->stack_a[1] < stack->stack_a[2])
	{
		sa(stack, 1);
		rra(stack, 1);
	}
}

void	sort_5_4(t_swap *stack)
{
	while (stack->size_a > 3)
	{
		if (min_pos_a(stack) >= stack->size_a / 2)
			while (min_pos_a(stack) != stack->size_a - 1)
				ra(stack, 1);
		else
			while (min_pos_a(stack) != stack->size_a - 1)
				rra(stack, 1);
		pb(stack, 1);
	}
	sort_3(stack);
	while (stack->size_b)
		pa(stack, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:46:54 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 19:20:59 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_swap *stack, int rule)
{
	int	current_top;
	int	i;

	if (stack == NULL || stack->size_a < 2)
		return ;
	i = 0;
	current_top = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->size_a - 1] = current_top;
	if (rule == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_swap *stack, int rule)
{
	int	i;
	int	current_top;

	i = 0;
	if (stack == NULL || stack->size_b < 2)
		return ;
	current_top = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->size_b - 1] = current_top;
	if (rule == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_swap *stack, int rule)
{
	rb(stack, 0);
	rra(stack, 0);
	if (rule == 1)
		write(1, "rrr\n", 4);
}

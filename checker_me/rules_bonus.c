/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:39:04 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 20:01:32 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_swap *stack, int rule)
{
	int	temp;

	if (stack->size_a < 2)
		return ;
	temp = stack->stack_a[stack->size_a - 1];
	stack->stack_a[stack->size_a - 1] = stack->stack_a[stack->size_a - 2];
	stack->stack_a[stack->size_a - 2] = temp;
	if (rule == 1)
		write(1, "sa\n", 3);
}

void	sb(t_swap *stack, int rule)
{
	int	temp;

	if (stack->size_b < 2)
		return ;
	temp = stack->stack_b[stack->size_b - 1];
	stack->stack_b[stack->size_b - 1] = stack->stack_b[stack->size_b - 2];
	stack->stack_b[stack->size_b - 2] = temp;
	if (rule != 0)
		write(1, "sb\n", 3);
}

void	ss(t_swap *stack, int rule)
{
	sa(stack, 0);
	sb(stack, 0);
	if (rule == 1)
		write(1, "ss\n", 3);
}

void	pa(t_swap *stack, int rule)
{
	if (stack->size_b == 0)
		return ;
	stack->stack_a[stack->size_a] = stack->stack_b[stack->size_b - 1];
	stack->stack_b[stack->size_b - 1] = 0;
	stack->size_b--;
	stack->size_a++;
	if (rule == 1)
		write(1, "pa\n", 3);
}

void	pb(t_swap *stack, int rule)
{
	if (stack->size_a == 0)
		return ;
	stack->stack_b[stack->size_b] = stack->stack_a[stack->size_a - 1];
	stack->stack_a[stack->size_a - 1] = 0;
	stack->size_a--;
	stack->size_b++;
	if (rule == 1)
		write(1, "pb\n", 3);
}

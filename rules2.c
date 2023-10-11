/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:12:37 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 03:33:52 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_swap *stack, int rule)
{
	int	last;
	int	i;

	last = stack->stack_a[stack->size_a - 1];
	i = stack->size_a - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = last;
	if (rule == 1)
		write (1, "ra\n", 3);
}

void	rb(t_swap *stack, int rule)
{
	int	last;
	int	i;

	last = stack->stack_b[stack->size_b - 1];
	i = stack->size_b - 1;
	while (i)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = last;
	if (rule != 0)
		write (1, "rb\n", 3);
}

void	rr(t_swap	*stack, int rule)
{
	rb(stack, 0);
	ra(stack, 0);
	if (rule != 0)
		write (1, "rr\n", 3);
}

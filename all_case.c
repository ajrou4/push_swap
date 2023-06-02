/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:54:07 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 18:39:59 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_sorted(t_swap *stack)
{
	int	*copy;

	if (stack->size_a == 2)
	{
		if (stack->stack_a[1] > stack->stack_a[0])
			sa(stack, 1);
	}
	else if (stack->size_a == 3)
		sort_3(stack);
	else if (stack->size_a > 3 && stack->size_a <= 5)
		sort_5_4(stack);
	else if (stack->size_a > 5 && stack->size_a <= 100)
	{
		copy = sort_quick(stack);
		sort_a(stack, 15, 0, copy);
		ft_sort(stack);
		free(copy);
	}
	else
	{
		copy = sort_quick(stack);
		sort_a(stack, 35, 0, copy);
		ft_sort(stack);
		free(copy);
	}
}

void	free_all(t_swap *stack, char **str)
{
	free_array(str);
	free(stack->stack_a);
	free(stack->stack_b);
}

int	cheack_rev(t_swap *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] < stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	fix_rev_sort(t_swap *stack)
{
	while (stack->size_a)
		pb(stack, 1);
	while (stack->size_b)
	{
		pa(stack, 1);
		ra(stack, 1);
	}
}

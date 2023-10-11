/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:03:38 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 22:12:55 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	max_pos(t_swap	*stack)
{
	int	pos;
	int	i;

	i = 0;
	pos = 0;
	while (i < stack->size_b)
	{
		if (stack->stack_b[pos] < stack->stack_b[i])
			pos = i;
		i++;
	}
	return (pos);
}

int	min_pos_a(t_swap	*stack)
{
	int	pos;
	int	i;

	i = 0;
	pos = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[pos] > stack->stack_a[i])
			pos = i;
		i++;
	}
	return (pos);
}

int	*copy_array(t_swap *stack)
{
	int	*copy;
	int	i;

	i = 0;
	copy = malloc(sizeof(int) * stack->size_a);
	if (!copy)
	{
		write(2, "Failed to allocate memory\n", 26);
		return (NULL);
	}
	while (i < stack->size_a)
	{
		copy[i] = stack->stack_a[i];
		i++;
	}
	return (copy);
}

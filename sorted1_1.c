/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted1_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:32:58 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 22:09:43 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rev(int *arr, int i, int j)
{
	int	tmp;

	while (i < j)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
	}
}

void	quicksort(int *arr, int left, int right)
{
	int	i;
	int	j;
	int	pivot;

	i = left;
	j = right;
	pivot = arr[(left + right) / 2];
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			ft_rev(arr, i, j);
			i++;
			j--;
		}
	}
	if (left < j)
		quicksort (arr, left, j);
	if (i < right)
		quicksort(arr, i, right);
}

int	*sort_quick(t_swap *stack)
{
	int	*copy;

	copy = copy_array(stack);
	if (!copy)
		return (NULL);
	quicksort(copy, 0, stack->size_a - 1);
	return (copy);
}

void	sort_a(t_swap *stack, int end, int start, int *copy)
{
	if (end > stack->size_a + stack->size_b - 1)
			end = stack->size_a + stack->size_b - 1;
	while (stack->size_a)
	{
		if (stack->stack_a[stack->size_a - 1] < copy[start])
		{
			pb(stack, 1);
			rb(stack, 1);
			start++;
			end++;
			if (end > stack->size_a + stack->size_b - 1)
				end = stack->size_a + stack->size_b - 1;
		}
		else if (stack->stack_a[stack->size_a - 1] >= copy[start] \
			&& stack->stack_a[stack->size_a - 1] <= copy[end])
		{
			pb(stack, 1);
			start++;
			end++;
			if (end > stack->size_a + stack->size_b - 1)
				end = stack->size_a + stack->size_b - 1;
		}
		else if (stack->stack_a[stack->size_a - 1] > copy[end])
			ra (stack, 1);
	}
}

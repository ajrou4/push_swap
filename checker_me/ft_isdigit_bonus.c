/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:11:04 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 20:12:11 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
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

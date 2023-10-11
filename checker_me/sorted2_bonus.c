/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted2_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 01:31:08 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 19:20:51 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

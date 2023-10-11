/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:39:48 by majrou            #+#    #+#             */
/*   Updated: 2023/05/15 22:04:19 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check_rules(t_swap *stack, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(stack, 0);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(stack, 0);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(stack, 0);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(stack, 0);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(stack, 0);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(stack, 0);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(stack, 0);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(stack, 0);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(stack, 0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(stack, 0);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(stack, 0);
	else
		return (1);
	return (0);
}

void	process_input(t_swap *stack)
{
	char	*line;

	line = get_next_line(0);
	while (line != NULL)
	{
		if (ft_check_rules(stack, line) == 1)
		{
			error(1);
		}
		free(line);
		line = get_next_line(0);
	}
}

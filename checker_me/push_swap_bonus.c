/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:24:50 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 22:02:38 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error(1);
		i++;
	}
	return (1);
}

int	is_valid_input(char **av_split)
{
	int	i;

	i = 0;
	while (av_split[i])
	{
		if (!ft_isdigit_str(av_split[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_arg(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while (av[i][j] != '\0' && av[i][j] == ' ')
			j++;
		if (!av[i][j])
			return (1);
		i++;
	}
	return (0);
}

void	free_stacks(t_swap *stack)
{
	free (stack->stack_a);
	free (stack->stack_b);
}

int	main(int ac, char **av)
{
	char	**spt;
	t_swap	stack;

	if (ac >= 2)
	{
		if (check_arg(av, ac))
			error(1);
		spt = s_args(&stack, ac, av);
		if (!is_valid_input(spt))
		{
			error(1);
			return (0);
		}
		plein_stack(&stack, spt);
		if (has_dupcat(stack.stack_a, stack.size_a))
			error(1);
		process_input(&stack);
		if (sorted(&stack) == 1)
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
		free_stacks(&stack);
	}
}

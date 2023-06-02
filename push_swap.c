/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:41:02 by majrou            #+#    #+#             */
/*   Updated: 2023/05/20 16:42:11 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 1 && !ft_isdigit(str[0]))
		error(1);
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

void	handel_arg(char **spt)
{
	if (!is_valid_input(spt))
	{
		free_array(spt);
		error(1);
	}
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
		handel_arg(spt);
		plein_stack(&stack, spt);
		if (has_dupcat(stack.stack_a, stack.size_a))
			error(1);
		if (!check_sorte(stack, spt))
			return (0);
		if (cheack_rev(&stack) == 1)
		{
			fix_rev_sort(&stack);
			free_all(&stack, spt);
			return (0);
		}
		all_sorted(&stack);
		free_all(&stack, spt);
	}
	return (0);
}

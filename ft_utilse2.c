/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilse2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:24:59 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 18:38:03 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cast_src;
	unsigned char	*cast_dest;

	if (!dest && ! src)
		return (NULL);
	i = 0;
	cast_src = (unsigned char *)src;
	cast_dest = (unsigned char *)dest;
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (cast_dest);
}

int	min_pos(int *arr, int size)
{
	int	min;
	int	i;

	min = arr[0];
	i = 0;
	while (i < size)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	return (min);
}

char	**s_args(t_swap *stack, int ac, char **av)
{
	int		i;
	char	*str;
	char	**spt;

	i = 1;
	stack->size_a = 0;
	str = NULL;
	if (ac < 2)
		exit(0);
	else
	{
		while (av[i])
		{
			str = ft_strjoin(str, av[i]);
			str = ft_strjoin(str, " ");
			i++;
		}
		spt = ft_split(str, ' ');
		i = -1;
		while (spt[++i])
			stack->size_a++;
		free(str);
		return (spt);
	}
}

void	free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	plein_stack(t_swap *stack, char **spt)
{
	int	i;
	int	j;

	i = 0;
	j = stack->size_a - 1;
	stack->stack_a = malloc(sizeof(int) * stack->size_a);
	stack->stack_b = malloc(sizeof(int) * stack->size_a);
	if (!stack->stack_a)
	{
		free_array(spt);
		exit(1);
	}
	i = -1;
	while (spt[++i])
	{
		stack->stack_a[j] = ft_latoi(spt[i]);
		stack->stack_b[j] = 0;
		j--;
	}
}

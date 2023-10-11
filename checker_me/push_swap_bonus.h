/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:34:42 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 22:59:30 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "GNL/get_next_line.h"
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_swap
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}t_swap;

int				ft_strcmp(char *s1, char *s2);
int				ft_check_rules(t_swap *swap, char *line);
long			ft_latoi(char	*str);
int				min_pos(int *arr, int size);
int				ft_isdigit(int c);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strdup(const char *str);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
void			sort_more(t_swap *stack);
size_t			ft_strlen(const char *str);
void			sa(t_swap *stack, int rule);
void			sb(t_swap *stack, int rule);
void			ss(t_swap *stack, int rule);
void			pa(t_swap *stack, int rule);
void			pb(t_swap *stack, int rule);
void			ra(t_swap *stack, int rule);
void			rb(t_swap *stack, int rule);
void			rr(t_swap *stack, int rule);
void			rra(t_swap *stack, int rule);
void			rrb(t_swap	*stack, int rule);
void			rrr(t_swap	*stack, int rule);
void			ft_swap(int *a, int *b);
void			print_rule(char str, int rule);
void			error(int a);
int				has_dupcat(int	*arr, int size);
void			fix_rev_sort(t_swap *stack);
int				cheack_rev(t_swap *stack);
char			**s_args(t_swap *stack, int ac, char **av);
void			plein_stack(t_swap *stack, char **spt);
void			free_all(t_swap *stack, char **str);
int				sorted(t_swap *stack);
void			process_input(t_swap *stack);
void			free_array(char **arr);
#endif

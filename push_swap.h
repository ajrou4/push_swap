/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 00:25:40 by majrou            #+#    #+#             */
/*   Updated: 2023/05/17 23:02:05 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

typedef struct s_swap
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}t_swap;

long			ft_latoi(char	*str);
int				min_pos(int *arr, int size);
int				ft_isdigit(int c);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strdup(const char *str);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
void			sort_5_4(t_swap *stack);
void			sort_3(t_swap *stack);
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
void			sort_a(t_swap *stack, int end, int start, int *copy);
void			ft_swap(int *a, int *b);
int				max_pos(t_swap	*stack);
int				min_pos_a(t_swap	*stack);
void			ft_sort(t_swap *stack);
void			print_rule(char str, int rule);
void			error(int a);
int				has_dupcat(int	*arr, int size);
void			all_sorted(t_swap *stack);
void			fix_rev_sort(t_swap *stack);
int				cheack_rev(t_swap *stack);
char			**s_args(t_swap *stack, int ac, char **av);
void			free_array(char **arr);
void			plein_stack(t_swap *stack, char **spt);
void			free_all(t_swap *stack, char **str);
int				sorted(t_swap *stack);
int				*sort_quick(t_swap *stack);
void			quicksort(int *arr, int left, int right);
int				*copy_array(t_swap *stack);
int				check_sorte(t_swap stack, char **spt);
int				check_arg(char **av, int ac);

#endif

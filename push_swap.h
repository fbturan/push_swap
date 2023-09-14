/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:02:03 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 19:17:27 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;

}	t_stack;

void		ft_sa(t_stack **a);
void		ft_pa(t_stack **a, t_stack **b);
void		ft_sb(t_stack **b);
void		ft_pb(t_stack **a, t_stack **b);
void		ft_ss(t_stack **a, t_stack **b);
void		ft_rr(t_stack **a, t_stack **b);
void		ft_rrr(t_stack **a, t_stack **b);
void		ft_ra(t_stack **a);
void		ft_rra(t_stack **a);
void		ft_rb(t_stack **b);
void		ft_rrb(t_stack **b);
void		ft_stackadd_front(t_stack **lst, t_stack *new);
void		ft_stackadd_back(t_stack **lst, t_stack *new);
void		ft_del_first_node(t_stack **stack);
void		ft_del_last_node(t_stack **stack);
void		ft_free(t_stack **a);
void		ft_error(void);
void		ft_free_arr(char **str);
void		ft_sort_three(t_stack **a);
void		ft_sort_small(t_stack **a, t_stack **b);
void		ft_find_rotate_type(t_stack **a, int nbr);
void		ft_sort_index(t_stack *a);
void		ft_radix_sort(t_stack **a, t_stack **b);
int			ft_atoi_p(const char *str);
int			ft_check_dup(t_stack *a);
int			ft_is_sorted(t_stack *stack);
int			ft_stack_min(t_stack *stack);
int			ft_stack_max(t_stack *stack);
int			ft_stacksize(t_stack *stack);
int			ft_find_index(t_stack *stack, int nbr);
int			ft_max_index(t_stack *a);
int			ft_max_bit(t_stack *a);
t_stack		*ft_stacklast(t_stack *lst);
t_stack		*ft_last_node(t_stack **stack);
t_stack		*ft_first_node(t_stack **stack);
t_stack		*ft_stacknew(int content);
t_stack		*ft_init_stack(int ac, char **av);

#endif
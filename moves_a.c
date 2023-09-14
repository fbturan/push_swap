/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:20:38 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:21:04 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	int	tmp;
	int	tmp2;

	if ((*a)->next)
	{
		tmp = (*a)->nbr;
		tmp2 = (*a)->index;
		(*a)->nbr = (*a)->next->nbr;
		(*a)->index = (*a)->next->index;
		(*a)->next->nbr = tmp;
		(*a)->next->index = tmp2;
	}
	write(1, "sa\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (b == 0)
		return ;
	tmp = ft_first_node(b);
	ft_stackadd_front(a, tmp);
	write(1, "pa\n", 3);
}

void	ft_ra(t_stack **a)
{
	t_stack	*first;

	first = ft_first_node(a);
	ft_stackadd_back(a, first);
	write(1, "ra\n", 3);
}

void	ft_rra(t_stack **a)
{
	t_stack	*last;

	last = ft_last_node(a);
	ft_stackadd_front(a, last);
	write(1, "rra\n", 4);
}

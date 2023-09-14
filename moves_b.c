/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:21:26 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:21:53 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack **b)
{
	int	tmp;
	int	tmp2;

	if ((*b)->next)
	{
		tmp = (*b)->nbr;
		tmp2 = (*b)->index;
		(*b)->nbr = (*b)->next->nbr;
		(*b)->index = (*b)->next->index;
		(*b)->next->nbr = tmp;
		(*b)->next->index = tmp2;
	}
	write(1, "sb\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (a == 0)
		return ;
	tmp = ft_first_node(a);
	ft_stackadd_front(b, tmp);
	write(1, "pb\n", 3);
}

void	ft_rb(t_stack **b)
{
	t_stack	*first;

	first = ft_first_node(b);
	ft_stackadd_back(b, first);
	write(1, "rb\n", 3);
}

void	ft_rrb(t_stack **b)
{
	t_stack	*last;

	last = ft_last_node(b);
	ft_stackadd_front(b, last);
	write(1, "rrb\n", 4);
}

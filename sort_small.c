/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:25:51 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:26:08 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_rotate_type(t_stack **a, int nbr)
{
	while (ft_find_index(*a, nbr) != 0)
	{
		if (ft_find_index(*a, nbr) < (ft_stacksize(*a) / 2))
			ft_ra(a);
		else
			ft_rra(a);
	}
}

void	ft_sort_small(t_stack **a, t_stack **b)
{
	int	min;

	while (ft_stacksize(*a) > 3)
	{
		min = ft_stack_min(*a);
		while (ft_find_index(*a, min) != 0)
			ft_find_rotate_type(a, min);
		ft_pb(a, b);
	}
	if (ft_is_sorted(*a))
		ft_sort_three(a);
	while (ft_stacksize(*b) > 0)
		ft_pa(a, b);
}

void	ft_sort_three(t_stack **a)
{
	if (ft_find_index(*a, ft_stack_min(*a)) == 0)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (ft_find_index(*a, ft_stack_min(*a)) == 1)
	{
		if (ft_find_index(*a, ft_stack_max(*a)) == 0)
			ft_ra(a);
		else
			ft_sa(a);
	}
	else
	{
		if (ft_find_index(*a, ft_stack_max(*a)) == 0)
		{
			ft_sa(a);
			ft_rra(a);
		}
		else
			ft_rra(a);
	}
}

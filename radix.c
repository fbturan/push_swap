/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:24:22 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/12 12:34:48 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_bit(t_stack *a)
{
	int	max_index;
	int	max_bit;

	max_index = ft_max_index(a);
	max_bit = 0;
	while ((max_index >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	ft_radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	num_len;
	int	max_bit;

	i = 0;
	max_bit = ft_max_bit(*a);
	num_len = ft_stacksize(*a);
	while (i < max_bit)
	{
		j = 0;
		while (j < num_len)
		{
			if ((((*a)->index >> i) & 1))
				ft_ra(a);
			else
				ft_pb(a, b);
			j++;
		}
		while (ft_stacksize(*b) != 0)
			ft_pa(a, b);
		i++;
	}
}

void	ft_sort_index(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*iter;
	int		num_index;

	iter = a;
	while (a)
	{
		tmp = iter;
		num_index = 0;
		while (tmp)
		{
			if (a->nbr > tmp->nbr)
				num_index++;
			tmp = tmp->next;
		}
		a->index = num_index;
		a = a->next;
	}
}

int	ft_max_index(t_stack *a)
{
	int	max_index;

	ft_sort_index(a);
	max_index = a->index;
	while (a)
	{
		if (max_index < a->index)
			max_index = a->index;
		a = a->next;
	}
	return (max_index);
}

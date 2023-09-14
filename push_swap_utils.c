/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:22:33 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:24:10 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_min(t_stack *stack)
{
	int	res;

	res = stack->nbr;
	while (stack)
	{
		if (res > stack->nbr)
			res = stack->nbr;
		stack = stack->next;
	}
	return (res);
}

int	ft_stack_max(t_stack *stack)
{
	int	res;

	res = stack->nbr;
	while (stack)
	{
		if (res < stack->nbr)
			res = stack->nbr;
		stack = stack->next;
	}
	return (res);
}

int	ft_find_index(t_stack *stack, int nbr)
{
	int	index;

	index = 0;
	while (stack->nbr != nbr)
	{
		index++;
		stack = stack->next;
	}
	return (index);
}

void	ft_free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_free(t_stack **a)
{
	t_stack	*tmp;

	if (!(*a))
		return ;
	tmp = *a;
	while (*a)
	{
		tmp = *a;
		(*a) = (*a)->next;
		free(tmp);
	}
}

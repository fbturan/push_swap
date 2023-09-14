/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:08:34 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:09:08 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_first_node(t_stack **stack)
{
	int		t_nbr;
	int		t_index;
	t_stack	*res;

	t_nbr = (*stack)->nbr;
	t_index = (*stack)->index;
	ft_del_first_node(stack);
	res = malloc (sizeof(t_stack));
	res->nbr = t_nbr;
	res->index = t_index;
	res->next = NULL;
	return (res);
}

t_stack	*ft_last_node(t_stack **stack)
{
	int		t_nbr;
	int		t_index;
	t_stack	*res;
	t_stack	*last;

	last = ft_stacklast(*stack);
	t_nbr = last->nbr;
	t_index = last->index;
	ft_del_last_node(stack);
	res = malloc (sizeof(t_stack));
	res->nbr = t_nbr;
	res->index = t_index;
	res->next = NULL;
	return (res);
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

int	ft_stacksize(t_stack *stack)
{
	int	last_i;

	if (stack == 0)
		return (0);
	last_i = ft_find_index(stack, ft_stacklast(stack)->nbr);
	return (last_i + 1);
}

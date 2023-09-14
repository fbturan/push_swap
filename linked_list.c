/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:10:13 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/11 15:14:41 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*iter;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	iter = *lst;
	while (iter->next)
	{
		iter = iter->next;
	}
	iter->next = new;
}

t_stack	*ft_stacklast(t_stack *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_del_first_node(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL)
		return ;
	tmp = (*stack);
	(*stack) = (*stack)->next;
	free(tmp);
}

void	ft_del_last_node(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (*stack == NULL)
		return ;
	tmp = *stack;
	if (tmp->next == NULL)
	{
		*stack = NULL;
		return ;
	}
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	free(tmp);
}

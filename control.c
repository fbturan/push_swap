/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:15:08 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/12 12:49:22 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi_p(const char *str)
{
	int			sign;
	long long	base;

	sign = 1;
	base = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (!*str)
		ft_error();
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		base = (*str - 48) + (base * 10);
		str++;
	}
	if ((base * sign) > 2147483647 || (base * sign) < -2147483648)
		ft_error();
	return (base * sign);
}

int	ft_check_dup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (tmp->nbr == a->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_is_sorted(t_stack *stack)
{
	if (!stack->next)
		return (0);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

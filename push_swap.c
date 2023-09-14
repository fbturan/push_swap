/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatturan <fatturan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:59:52 by fatturan          #+#    #+#             */
/*   Updated: 2023/09/12 11:48:38 by fatturan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_init_stack(int ac, char **av)
{
	int		i;
	int		j;
	char	**tmp;
	t_stack	*a;
	t_stack	*new;

	a = NULL;
	i = 1;
	if (av[i])
	{
		while (i < ac)
		{
			tmp = ft_split(av[i], ' ');
			j = 0;
			while (tmp[j])
			{
				new = ft_stacknew(ft_atoi_p(tmp[j]));
				ft_stackadd_back(&a, new);
				j++;
			}
			i++;
			ft_free_arr(tmp);
		}
	}
	return (a);
}

int	main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	b = NULL;
	if (ac < 2)
		exit(1);
	a = ft_init_stack(ac, av);
	if (!a)
		return (0);
	if (ft_check_dup(a))
		ft_error();
	if (ft_is_sorted(a))
	{
		if (ft_stacksize(a) < 6)
			ft_sort_small(&a, &b);
		else
			ft_radix_sort(&a, &b);
	}
	ft_free(&a);
}

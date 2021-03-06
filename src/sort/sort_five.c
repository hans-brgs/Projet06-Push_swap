/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:26:42 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/26 21:57:03 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_top(t_dcl_list **stack_a)
{
	size_t	pos;
	size_t	size;
	int		min;

	pos = get_min_position(stack_a);
	min = get_value(stack_a, pos);
	size = size_list(stack_a);
	while ((*stack_a)->num != min)
	{
		if (pos >= size / 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	return ;
}

void	sort_five(t_dcl_list **stack_a, t_dcl_list **stack_b)
{
	size_t	j;
	size_t	size_a;

	size_a = size_list(stack_a);
	j = 0;
	while (j < size_a / 2)
	{
		push_min_top(stack_a);
		pb(stack_a, stack_b);
		j++;
	}
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:05:12 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/26 08:20:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simplify(t_dcl_list **start, t_dcl_list *start_copy)
{
	size_t		j;
	size_t		i;
	t_dcl_list	*tmp;
	t_dcl_list	*tmp_copy;

	tmp = *start;
	i = 0;
	while (i < size_list(start))
	{
		j = 0;
		tmp_copy = start_copy;
		while (j < size_list(&tmp_copy))
		{
			if ((tmp)->num == tmp_copy->num)
			{
				(tmp)->num = j;
				break ;
			}
			tmp_copy = tmp_copy->next;
			j++;
		}
		tmp = (tmp)->next;
		i++;
	}
	return ;
}

static size_t	get_max_bits(t_dcl_list **stack_a)
{
	size_t		size_a;
	size_t		max_num;
	size_t		max_bits;

	max_bits = 0;
	size_a = size_list(stack_a);
	max_num = size_a - 1;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix(t_dcl_list **stack_a, t_dcl_list **stack_b)
{
	size_t		size_a;
	t_dcl_list	*tmp;
	size_t		i;
	size_t		j;

	i = 0;
	size_a = size_list(stack_a);
	tmp = *stack_a;
	while (i < get_max_bits(stack_a))
	{
		j = 0;
		while (j < size_a)
		{
			tmp = *stack_a;
			if (((tmp->num >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_b, stack_a);
		i++;
	}
}

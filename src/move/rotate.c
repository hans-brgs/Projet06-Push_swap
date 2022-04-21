/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:53:07 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:13 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_dcl_list **stack_a)
{
	if (isempty_list(stack_a))
		return ;
	head_to_next(stack_a);
	ft_printf("ra\n");
	return ;
}

void	rb(t_dcl_list **stack_b)
{
	if (isempty_list(stack_b))
		return ;
	head_to_next(stack_b);
	ft_printf("rb\n");
	return ;
}

void	rra(t_dcl_list **stack_a)
{
	if (isempty_list(stack_a))
		return ;
	head_to_prev(stack_a);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_dcl_list **stack_b)
{
	if (isempty_list(stack_b))
		return ;
	head_to_prev(stack_b);
	ft_printf("rrb\n");
	return ;
}

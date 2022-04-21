/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:00:45 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:10 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_dcl_list **stack_b, t_dcl_list **stack_a)
{
	if (isempty_list(stack_b))
		return ;
	insert_begin(stack_a, (*stack_b)->num);
	delete_start_node(stack_b);
	ft_printf("pa\n");
	return ;
}

void	pb(t_dcl_list **stack_a, t_dcl_list **stack_b)
{
	if (isempty_list(stack_a))
		return ;
	insert_begin(stack_b, (*stack_a)->num);
	delete_start_node(stack_a);
	ft_printf("pb\n");
	return ;
}


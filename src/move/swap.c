/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:03:59 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:16 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_dcl_list **stack_a)
{
	t_dcl_list	*node1;
	t_dcl_list	*node2;
	t_dcl_list	*last;

	last = (*stack_a)->prev;
	node1 = *stack_a;
	node2 = (*stack_a)->next;
	if (isempty_list(stack_a))
		return ;
	node1->next = node1->next->next;
	node2->prev = last;
	last->next = node2;
	node2->next = node1;
	node1->prev = node2;
	*stack_a = node2;
	ft_printf("sa\n");
	return ;
}

void	sb(t_dcl_list **stack_b)
{
	t_dcl_list	*node1;
	t_dcl_list	*node2;
	t_dcl_list	*last;

	last = (*stack_b)->prev;
	node1 = *stack_b;
	node2 = (*stack_b)->next;
	if (isempty_list(stack_b))
		return ;
	node1->next = node1->next->next;
	node2->prev = last;
	last->next = node2;
	node2->next = node1;
	node1->prev = node2;
	*stack_b = node2;
	ft_printf("sb\n");
	return ;
}

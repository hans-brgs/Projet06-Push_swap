/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:08:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:00 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_list(t_dcl_list **node1, t_dcl_list **node2)
{
	int	tmp;

	tmp = (*node1)->num;
	(*node1)->num = (*node2)->num;
	(*node2)->num = tmp;
	return ;
}

void	sorting_list(t_dcl_list **start)
{
	t_dcl_list	*node1;
	t_dcl_list	*node2;

	node1 = *start;
	if (isempty_list(start))
		return ;
	while (node1->next != *start)
	{
		node2 = node1->next;
		while (node2 != *start)
		{
			if (node1->num > node2->num)
				swap_list(&node1, &node2);
			node2 = node2->next;
		}
		node1 = node1 -> next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:45:38 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:15:18 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_list(t_dcl_list **start)
{
	t_dcl_list	*tmp;
	t_dcl_list	*current;

	if (isempty_list(start))
		return ;
	tmp = (*start)->next;
	while (tmp != *start)
	{
		current = tmp;
		tmp = tmp->next;
		free(current);
	}
	free(*start);
	*start = NULL;
	return ;
}

void	delete_start_node(t_dcl_list **start)
{
	t_dcl_list	*tmp;
	t_dcl_list	*tmp_prev;

	if (isempty_list(start))
		return ;
	if ((*start)->next == *start && (*start)->prev == *start)
	{
		free(*start);
		*start = NULL;
		return ;
	}
	tmp = *start;
	tmp_prev = (*start)->prev;
	*start = (*start)->next;
	tmp_prev->next = *start;
	(*start)->prev = tmp_prev;
	free(tmp);
	return ;
}

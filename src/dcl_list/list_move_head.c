/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_move_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:44:28 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:15:57 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	head_to_next(t_dcl_list **start)
{
	if (isempty_list(start))
		return ;
	(*start) = (*start)->next;
	return ;
}

void	head_to_prev(t_dcl_list **start)
{
	if (isempty_list(start))
		return ;
	(*start) = (*start)->prev;
	return ;
}

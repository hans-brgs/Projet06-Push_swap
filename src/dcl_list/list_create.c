/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:48:49 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:15:15 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dcl_list	*create_node(int num)
{
	t_dcl_list	*node;

	node = (t_dcl_list *)malloc(sizeof(t_dcl_list));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

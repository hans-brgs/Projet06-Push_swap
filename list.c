/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:48:49 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/14 11:05:19 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cdl_list	*create_node(int num)
{
	t_cdl_list	*node;

	node = (t_cdl_list *)malloc(sizeof(t_cdl_list));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	insert_end(t_cdl_list **start, int num)
{
	t_cdl_list	*new_node;
	t_cdl_list	*last;

	if (*start == NULL)
	{
		new_node = create_node(num);
		new_node->next = new_node;
		new_node->prev = new_node;
		*start = new_node;
		return ;
	}
	else
	{	
		last = (*start)->prev;
		new_node = create_node(num);
		new_node->next = *start;
		(*start)->prev = new_node;
		new_node->prev = last;
		last->next = new_node;
		return ;
	}	
}

void	insert_begin(t_cdl_list **start, int num)
{
	t_cdl_list	*new_node;
	t_cdl_list	*last;

	if (*start == NULL)
	{
		new_node = create_node(num);
		new_node->next = new_node;
		new_node->prev = new_node;
		*start = new_node;
		return ;
	}
	else
	{	
		last = (*start)->prev;
		new_node = create_node(num);
		new_node->next = *start;
		new_node->prev = last;
		(*start)->prev = new_node;
		last->next = new_node;
		*start = new_node;
		return ;
	}	
}

void	display(t_cdl_list **start)
{
	t_cdl_list	*tmp;

	tmp = *start;
	while (tmp->next != *start)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->num);
	return ;
}

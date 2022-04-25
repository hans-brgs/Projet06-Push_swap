/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:43:23 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/25 07:44:41 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_dcl_list **start, int num)
{
	t_dcl_list	*new_node;
	t_dcl_list	*last;

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

void	insert_begin(t_dcl_list **start, int num)
{
	t_dcl_list	*new_node;
	t_dcl_list	*last;

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

void	fill_stack(char *argv[], t_dcl_list **stack_a)
{	
	int	num;
	size_t		i;
	char		**array;

	argv++;
	while (*argv)
	{
		array = ft_split(*argv, ' ');
		i = 0;
		while (array[i])
		{
			num = ft_atoi(array[i]);
			insert_end(stack_a, num);
			i++;
		}
		ft_free_array(array);
		argv++;
	}
	return ;
}

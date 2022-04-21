/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:43:09 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:15:54 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	isempty_list(t_dcl_list **start)
{
	if (*start == NULL)
	{
		ft_error();
		return (1);
	}
	return (0);
}

size_t	isduplicate_list(t_dcl_list **start)
{
	t_dcl_list	*to_compare;
	t_dcl_list	*compare;

	to_compare = (*start)->next;
	if (*start == (*start)->next && *start == (*start)->prev)
		return (0);
	while (to_compare != *start)
	{
		compare = to_compare->next;
		while (compare != to_compare)
		{
			if (to_compare->num == compare->num)
			{
				ft_error();
				delete_list(start);
				return (1);
			}
			compare = compare->next;
		}
		to_compare = to_compare->next;
	}
	return (0);
}

size_t	issort_list(t_dcl_list **start)
{
	t_dcl_list	*tmp;

	tmp = (*start);
	while (tmp != (*start)->prev)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

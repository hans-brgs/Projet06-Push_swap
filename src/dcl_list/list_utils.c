/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:47:07 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:03 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_list(t_dcl_list **start)
{
	t_dcl_list	*tmp;

	if (isempty_list(start))
		return ;
	tmp = *start;
	while (tmp->next != *start)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->num);
	return ;
}

size_t	size_list(t_dcl_list **start)
{
	t_dcl_list	*tmp;
	int			size;

	size = 0;
	tmp = (*start);
	while (tmp != (*start)->prev)
	{
		tmp = tmp->next;
		size++;
	}
	size++;
	return (size);
}

t_dcl_list	*copy_list(t_dcl_list *start, t_dcl_list *copy)
{
	t_dcl_list	*tmp;

	if (isempty_list(&start))
		return (start);
	tmp = start;
	while (tmp->next != start)
	{
		insert_end(&copy, tmp->num);
		tmp = tmp->next;
	}
	insert_end(&copy, tmp->num);
	return (copy);
}

size_t	get_min_position(t_dcl_list **stack_a)
{
	t_dcl_list	*tmp;
	int			num;
	size_t		i;
	size_t		pos;
	size_t		size_a;

	size_a = size_list(stack_a);
	i = 0;
	pos = 0;
	tmp = *stack_a;
	num = tmp->num;
	while (i <= size_a)
	{
		if (tmp->next->num < num)
		{
			num = tmp->next->num;
			pos = i + 1;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

size_t	get_max_position(t_dcl_list **stack_a)
{
	t_dcl_list	*tmp;
	int			num;
	size_t		i;
	size_t		pos;
	size_t		size_a;

	size_a = size_list(stack_a);
	i = 0;
	pos = 0;
	tmp = *stack_a;
	num = tmp->num;
	while (i <= size_a)
	{
		if (tmp->next->num > num)
		{
			num = tmp->next->num;
			pos = i + 1;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

int	get_value(t_dcl_list **stack_a, size_t pos)
{
	size_t		size_a;
	size_t		i;
	t_dcl_list	*tmp;

	i = 0;
	tmp = *stack_a;
	size_a = size_list(stack_a);
	while (i < size_a)
	{
		if (i == pos)
			return (tmp->num);
		tmp = tmp->next;
		i++;
	}
	ft_printf("value not found");
	return (0);
}

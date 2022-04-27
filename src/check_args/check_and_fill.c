/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:32:24 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/27 08:55:39 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	check_and_fill(int argc, char *argv[], t_dcl_list **stack_a)
{
	if (argc == 1)
		return (1);
	if (argv_check(argv) == 1)
		return (1);
	fill_stack(argv, stack_a);
	if (*stack_a == NULL)
		return (1);
	if (isduplicate_list(stack_a))
		return (1);
	if (issort_list(stack_a))
	{
		delete_list(stack_a);
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:13:14 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/20 12:56:29 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_dcl_list	*stack_a;
	t_dcl_list	*copy;
	t_dcl_list	*stack_b;

	stack_a = NULL;
	copy = NULL;
	stack_b = NULL;
	fill_and_check(argc, argv, &stack_a);
	if (stack_a == NULL)
		return (1);
	else
	{
		if (size_list(&stack_a) <= 5)
		{
			if (size_list(&stack_a) <= 3)
				sort_three(&stack_a);
			else
				sort_five(&stack_a, &stack_b);
		}
		else
		{
		copy = copy_list(stack_a, copy);
		sorting_list(&copy);
		simplify(&stack_a, copy);
		// display_list(&stack_a);
		radix(&stack_a, &stack_b);
		// display_list(&stack_a);
		}
	}
	if (stack_a != NULL)
		delete_list(&stack_a);
	if (copy != NULL)
		delete_list(&copy);
	return (0);
}

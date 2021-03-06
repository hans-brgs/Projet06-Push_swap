/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:13:14 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/27 08:54:01 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_choice(t_dcl_list **stack_a, t_dcl_list **stack_b)
{
	t_dcl_list	*copy_a;

	copy_a = NULL;
	if (size_list(stack_a) <= 5)
	{
		if (size_list(stack_a) <= 3)
			sort_three(stack_a);
		else
			sort_five(stack_a, stack_b);
	}
	else
	{
		copy_a = copy_list(*stack_a, copy_a);
		sorting_list(&copy_a);
		simplify(stack_a, copy_a);
		radix(stack_a, stack_b);
	}
	if (copy_a != NULL)
		delete_list(&copy_a);
	return ;
}

int	main(int argc, char *argv[])
{
	t_dcl_list	*stack_a;
	t_dcl_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	check_and_fill(argc, argv, &stack_a);
	if (stack_a == NULL)
		return (0);
	else
	{
		sort_choice(&stack_a, &stack_b);
	}
	if (stack_a != NULL)
		delete_list(&stack_a);
	return (0);
}

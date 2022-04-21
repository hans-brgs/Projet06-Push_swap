/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:50:19 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:20 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// case1 : 0 2 1
void	case1(t_dcl_list **stack_a)
{
	rra(stack_a);
	sa(stack_a);
	return ;
}

// case2 : 1 0 2
void	case2(t_dcl_list **stack_a)
{
	sa(stack_a);
	return ;
}

// case3 : 1 2 0
void	case3(t_dcl_list **stack_a)
{
	rra(stack_a);
	return ;
}

// case4 : 2 0 1
void	case4(t_dcl_list **stack_a)
{
	ra(stack_a);
	return ;
}

// case5 : 2 1 0
void	case5(t_dcl_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	return ;
}

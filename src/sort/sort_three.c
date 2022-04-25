/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:55:45 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/22 09:21:04 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_dcl_list **stack_a)
{
	if (get_min_position (stack_a) == 0 && get_max_position (stack_a) == 1)
		case1(stack_a);
	if (get_min_position (stack_a) == 1 && get_max_position (stack_a) == 2)
		case2(stack_a);
	if (get_min_position (stack_a) == 2 && get_max_position (stack_a) == 1)
		case3(stack_a);
	if (get_min_position (stack_a) == 1 && get_max_position (stack_a) == 0)
		case4(stack_a);
	if (get_min_position (stack_a) == 2 && get_max_position (stack_a) == 0)
		case5(stack_a);
}

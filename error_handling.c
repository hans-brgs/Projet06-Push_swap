/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:50:03 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/14 12:51:25 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_argc(void)
{
	ft_printf("%s\n", "Error ARGC : not enough args");
	return ;
}

void	error_argv(void)
{
	ft_printf("%s\n", "Error ARGV : not a number");
	return ;
}

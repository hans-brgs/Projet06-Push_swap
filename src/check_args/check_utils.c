/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:03:25 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/22 10:00:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	argv1_check(char *arg)
{
	size_t	len;
	char	**array;

	len = 0;
	array = ft_split(arg, ' ');
	while (array[len])
	{
		len++;
	}
	ft_free_array(array);
	if (len < 2)
	{
		ft_error();
		return (1);
	}
	return (0);
}

static size_t	check_sign(char *array)
{
	size_t		j;
	size_t		check;
	size_t		sign;

	sign = 0;
	check = 0;
	j = 0;
	while (array[j])
	{
		if (array[j] == '-' || array[j] == '+')
			sign++;
		j++;
	}
	if (sign == 1)
	{
		if (array[0] == '-' || array[0] == '+')
			check = 0;
		else
			check = 1;
	}
	else if (sign > 1)
		check = 1;
	else
		check = 0;
	return (check);
}

static size_t	check_isnum(char *array)
{
	size_t		j;
	size_t		check;

	check = 0;
	j = 0;
	if (check_sign(array) == 1)
	{
		ft_error();
		return (1);
	}
	while (array[j])
	{
		if (ft_isdigit(array[j]) || array[j] == '-' || array[j] == '+')
			check = 0;
		else
		{
			check = 1;
			ft_error();
			return (check);
		}
		j++;
	}
	return (check);
}

static size_t	check_limits(char *array)
{
	long long	num;

	num = ft_atoll(array);
	if (num > INT_MAX || num < INT_MIN)
	{
		ft_error();
		return (1);
	}
	return (0);
}

size_t	argv_check(char *argv[])
{	
	size_t		i;
	char		**array;
	size_t		check;

	check = 0;
	while (*(++argv))
	{
		array = ft_split(*argv, ' ');
		i = -1;
		while (array[++i])
		{
			if (check_isnum(array[i]) == 1)
			{
				check = 1;
				break ;
			}
			if (check_limits(array[i]) == 1)
			{
				check = 1;
				break ;
			}
		}
		ft_free_array(array);
	}
	return (check);
}

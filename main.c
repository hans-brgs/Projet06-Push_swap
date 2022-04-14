/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:13:14 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/14 12:56:54 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	ft_free_array(char **array)
{
	size_t	n;

	n = 0;
	while (array[n])
	{
		free(array[n]);
		n++;
	}
	free(array);
}

size_t	check_arg(char *arg)
{
	size_t	check;

	while (*arg)
	{
		if (ft_isdigit(*arg))
			check = 1;
		else
		{
			check = 0;
			return (check);
		}
		arg++;
	}
	return (check);
}

t_cdl_list	*argv_handling(char *arg, t_cdl_list *stack_a)
{	
	int		num;
	int		i;
	char	**array;

	i = 0;
	array = ft_split(arg, ' ');
	while (array[i])
	{
		if (check_arg(array[i]) == 0)
		{
			error_argv();
			break;
		}
		num = ft_atoi(array[i]);
		insert_end(&stack_a, num);
		i++;
	}
	ft_free_array(array);
	return (stack_a);
}

int	main(int argc, char *argv[])
{
	t_cdl_list	*stack_a;

	stack_a = NULL;
	if (argc < 3)
		error_argc();
	else
	{
		argv++;
		while (*argv)
		{
			stack_a = argv_handling(*argv, stack_a);
			if (stack_a == NULL)
				return (0);
			argv++;
		}
		display(&stack_a);
	}
	return (0);
}

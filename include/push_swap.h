/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:30:38 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/22 08:00:28 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/includes/libft.h"

typedef struct s_dcl_list
{
	int					num;
	struct s_dcl_list	*next;
	struct s_dcl_list	*prev;
}	t_dcl_list;

/* check args */
size_t		fill_and_check(int argc, char *argv[], t_dcl_list **stack_a);
size_t		argv1_check(char *arg);
size_t		check_sign(char *array);
size_t		check_isnum(char *array);
size_t		check_limits(char *array);
size_t		argv_check(char *argv[]);

/* list */
t_dcl_list	*create_node(int num);
void		fill_stack(char *argv[], t_dcl_list **stack_a);
size_t		issort_list(t_dcl_list **start);
size_t		isduplicate_list(t_dcl_list **start);
size_t		size_list(t_dcl_list **start);
size_t		isempty_list(t_dcl_list **start);
void		insert_end(t_dcl_list **start, int num);
void		insert_begin(t_dcl_list **start, int num);
void		display_list(t_dcl_list **start);
void		delete_list(t_dcl_list **start);
void		delete_start_node(t_dcl_list **start);
void		head_to_next(t_dcl_list **start);
void		head_to_prev(t_dcl_list **start);
void		sorting_list(t_dcl_list **start);
t_dcl_list	*copy_list(t_dcl_list *start, t_dcl_list *copy);
size_t		get_min_position(t_dcl_list **stack_a);
size_t		get_max_position(t_dcl_list **stack_a);
int			get_value(t_dcl_list **stack_a, size_t pos);

/* move */
void		pa(t_dcl_list **stack_b, t_dcl_list **stack_a);
void		pb(t_dcl_list **stack_a, t_dcl_list **stack_b);
void		ra(t_dcl_list **stack_a);
void		rra(t_dcl_list **stack_a);
void		rb(t_dcl_list **stack_b);
void		rrb(t_dcl_list **stack_b);
void		sa(t_dcl_list **stack_a);

/* error */
void		ft_error(void);

/* sort */
void		radix(t_dcl_list **stack_a, t_dcl_list **stack_b);
void		simplify(t_dcl_list **start, t_dcl_list *start_copy);
void		sort_three(t_dcl_list **stack_a);
void		sort_five(t_dcl_list **stack_a, t_dcl_list **stack_b);
void		case1(t_dcl_list **stack_a);
void		case2(t_dcl_list **stack_a);
void		case3(t_dcl_list **stack_a);
void		case4(t_dcl_list **stack_a);
void		case5(t_dcl_list **stack_a);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 08:30:38 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/04/14 12:52:21 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "ft_printf/libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_cdl_list
{
	int					num;
	struct s_cdl_list	*next;
	struct s_cdl_list	*prev;
}	t_cdl_list;

/* list */
t_cdl_list	*create_node(int num);
void		insert_end(t_cdl_list **start, int num);
void		insert_begin(t_cdl_list **start, int num);
void		display(t_cdl_list **start);

/* error */
void		error_argc(void);
void		error_argv(void);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:51:46 by marvin            #+#    #+#             */
/*   Updated: 2022/01/07 18:51:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <io.h>
#include <stdlib.h>


//
//
//structs
//
//
typedef struct v_vars
{
	int	true_index;
	int	local_stack;
	int	range;
	int	direction;
	int	value;
	int	keep_in_stack;
}	t_vars;

typedef struct v_list
{
	struct v_list  *next;
    struct v_list  *previos;
    struct v_vars  content;
}	t_list;

//
//
//includes
//
//

int     ft_atoi(char *str);
void    valid(char *str);
void    ft_error(void);
void	big_valid(char **names, int num);
void    uniqs(int num, char **names);

//
//
//small_stack_sort
//
//

void    small_stack_sort(int    num, char **names);

//
//
//for_lists
//
//
t_list	*ft_last_element(t_list *lst);
void    add_front_element(t_list  **list, int new_value);
t_list  *new_element(int value);
t_list  *create_list(int num, char **names);
t_list	*ft_first_element(t_list *lst);

#endif
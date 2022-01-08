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
# define PUSH_SWAP_H

# include <io.h>
# include <stdlib.h>

//
//
//STRUCTS
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
	struct v_list	*next;
	struct v_list	*previos;
	struct v_vars	content;
}	t_list;

//
//
//INCLUDES
//
//

int		ft_atoi(char *str);
void	valid(char *str);
void	ft_error(void);
void	big_valid(char **names, int num);
void	uniqs(int num, char **names);
void	ft_free(t_list	*list);

//
//
//FOR_QUICK_SORT
//
//

void	quick_sort(int num, char **names);
void	true_index(t_list *list, char **names);
void	do_lists(t_list *list_a, t_list *list_b, int num, char **names);
void	local_stack(t_list *list, char **names);
void	keep_in_stack(t_list *list);
void	do_keep_in_stack(t_list *list);

//
//
//FOR_LISTS
//
//

t_list	*ft_last_element(t_list *lst);
void	add_front_element(t_list **list, int new_value);
t_list	*new_element(int value);
t_list	*create_list(int num, char **names);
t_list	*ft_first_element(t_list *lst);
void	add_back_element(t_list **list, int new_value);
t_list	*ft_copy_element(t_list *list);

//
//
//RULES
//
//

void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *list_a, t_list *list_b);
void	pa(t_list *list_a, t_list *list_b);

#endif
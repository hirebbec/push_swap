/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:51:46 by marvin            #+#    #+#             */
/*   Updated: 2022/01/30 21:10:20 by hirebbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
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

long int	ft_atoi(char *str);
void		valid(char *str);
void		ft_error(void);
void		big_valid(char **names, int num);
void		uniqs(int num, char **names);
void		ft_free(t_list	*list);
char		**ft_split(char *s, char c);
int			count(char **m);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strdup(char *s1);
size_t		ft_strlen(char *s);
char		*ft_strtrim(char *s1, char *set);
char		*ft_strchr(char *s, int c);
void		free_mat(char **mat);
//
//
//FOR_QUICK_SORT
//
//

void		quick_sort(int num, char **names);
void		true_index(t_list *list, char **names);
void		local_stack_sort(t_list **list_a, t_list **list_b, char **names);
void		local_stack(t_list *list);
void		keep_in_stack(t_list *list);
void		do_keep_in_stack(t_list *list);
void		ft_create_list_b(t_list **list_a, t_list **list_b);
void		cheack(t_list *list);
void		ft_direction(t_list **list);
void		ft_range(t_list **list_a, t_list **list_b);
void		range(t_list **list);
int			ft_find_short(t_list *list_a, t_list *list_b);
int			ft_find_short_2(t_list *list_a, t_list *list_b);
int			f_f(int index, int range, t_list *list);
int			ft_find_2(int index, int range, t_list *list);
void		ft_sort(int i, t_list **list_a, t_list **list_b);
t_list		*ft_find_element(t_list *list, int index);
void		ft_last(t_list **list_a, t_list **list_b);
void		cheack_r(t_list *list_a);
int			ft_index(t_list *list, int index);
int			ft_find_a(t_list *list_a, int index, t_list *list_b);
void		ft_if_last(t_list **list, int direct);
void		sort(int direc_a, int direc_b, t_list **list_a, t_list **list_b);
void		for_sort_a(int direc_a, t_list **list_a);
void		for_sort_b(int direc_b, t_list **list_b);
void		direction(t_list **list_a, t_list **list_b);
void		valid_with_free(char *str);
//
//
//FOR_SMALL_STACK
//
//

void		small_stack(char **names);
void		min_push(t_list **list_a, t_list **list_b);
void		ft_sort_three(t_list **list);
//
//
//FOR_LISTS
//
//

t_list		*ft_last_element(t_list *lst);
void		add_front_element(t_list **list, int new_value);
t_list		*new_element(int value);
void		create_start_list(char **names, t_list **list);
t_list		*ft_first_element(t_list *lst);
void		dd_back_element(t_list **list, int new_value);
t_list		*ft_copy_element(t_list *list);
int			list_len(t_list *list);
t_list		*create_list(int num, char **names);

//
//
//RULES
//
//

void		sa(t_list **list);
void		sb(t_list **list);
void		ss(t_list **list_a, t_list **list_b);
void		pa(t_list **list_b, t_list **list_a);
void		pb(t_list **list_a, t_list **list_b);
void		ra(t_list **list);
void		rb(t_list **list);
void		rr(t_list **list_a, t_list **list_b);
void		rra(t_list **list);
void		rrb(t_list **list);
void		rrr(t_list **list_a, t_list **list_b);
////
////
////
void		show(t_list *list);
#endif
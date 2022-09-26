# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirebbec <hirebbec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 17:22:57 by hirebbec          #+#    #+#              #
#    Updated: 2022/01/29 15:17:58 by hirebbec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = push_swap

NAME_BONUS = checker

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

FILES = main.c includes/valid.c  includes/ft_error.c quick_sort.c includes/ft_atoi.c  for_lists/create_list.c \
		includes/ft_free.c for_sort/do_lists.c for_lists/utils_for_lists.c rules/sa.c rules/sb.c rules/ss.c rules/pa.c \
		rules/pb.c rules/ra.c rules/rb.c rules/rr.c rules/rra.c rules/rrb.c  rules/rrr.c for_sort/utils.c for_sort/ft_find.c \
		for_sort/ft_sort.c includes/ft_split.c includes/ft_substr.c includes/ft_strlen.c includes/ft_strdup.c includes/ft_strtrim.c \
		includes/ft_strchr.c for_sort/for_sort.c for_sort/small_stack.c includes/ft_strjoin.c

FILES_BONUS =	for_bonus/bonus_main.c for_bonus/for_reading.c for_bonus/ft_split.c \
				includes/valid.c  includes/ft_error.c quick_sort.c includes/ft_atoi.c  for_lists/create_list.c \
				includes/ft_free.c for_sort/do_lists.c for_lists/utils_for_lists.c rules/sa.c rules/sb.c rules/ss.c rules/pa.c \
				rules/pb.c rules/ra.c rules/rb.c rules/rr.c rules/rra.c rules/rrb.c  rules/rrr.c for_sort/utils.c for_sort/ft_find.c \
				for_sort/ft_sort.c includes/ft_split.c includes/ft_substr.c includes/ft_strlen.c includes/ft_strdup.c includes/ft_strtrim.c \
				includes/ft_strchr.c for_sort/for_sort.c for_sort/small_stack.c includes/ft_strjoin.c for_bonus/bonus_rules/pa.c \
				for_bonus/bonus_rules/pb.c for_bonus/bonus_rules/sa.c for_bonus/bonus_rules/sb.c for_bonus/bonus_rules/ra.c \
				for_bonus/bonus_rules/rb.c for_bonus/bonus_rules/rr.c for_bonus/bonus_rules/rra.c for_bonus/bonus_rules/rrb.c \
				for_bonus/bonus_rules/rrr.c for_bonus/bonus_rules/ss.c for_bonus/valid_bonus.c
 
OBJS = $(FILES:%.c=%.o)

OBJS_BONUS = $(FILES_BONUS:%.c=%.o)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

all: $(NAME)

bonus: $(NAME_BONUS)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY:all clean fclean re bonus

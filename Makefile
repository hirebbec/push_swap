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

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = main.c includes/valid.c  includes/ft_error.c quick_sort.c includes/ft_atoi.c  for_lists/create_list.c \
		includes/ft_free.c for_sort/do_lists.c for_lists/utils_for_lists.c rules/sa.c rules/sb.c rules/ss.c rules/pa.c \
		rules/pb.c rules/ra.c rules/rb.c rules/rr.c rules/rra.c rules/rrb.c  rules/rrr.c for_sort/utils.c for_sort/ft_find.c \
		for_sort/ft_sort.c includes/ft_split.c includes/ft_substr.c includes/ft_strlen.c includes/ft_strdup.c includes/ft_strtrim.c \
		includes/ft_strchr.c for_sort/for_sort.c for_sort/small_stack.c

OBJS = $(FILES:%.c=%.o)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:all clean fclean re

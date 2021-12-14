# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snuts <snuts@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 20:08:43 by snuts             #+#    #+#              #
#    Updated: 2021/12/11 15:56:14 by snuts            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS	=	main.c ft_atoi.c functions.c revert.c ft_sort.c ft_checker.c\


OBJS = $(SRCS:.c=.o)

HEADER	=	push_swap.h

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(SRCS) $(MLXFLAGS) $(CFLAGS) -o $(NAME)

%o:			%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
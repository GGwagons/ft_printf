# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miturk <miturk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 10:29:03 by miturk            #+#    #+#              #
#    Updated: 2023/09/22 15:04:31 by miturk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_printf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

SRC_FILES = ft_printf.c \
			ft_putu.c \
			ft_puts.c \
			ft_putdi.c \
			ft_putchar_p.c \
			ft_puthex.c 

OBJS = $(SRC_FILES:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

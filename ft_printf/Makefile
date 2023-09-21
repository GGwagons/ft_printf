# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miturk <miturk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 10:29:03 by miturk            #+#    #+#              #
#    Updated: 2023/09/21 16:01:41 by miturk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Werror -Wextra
AR		= ar rcs
RM		= rm -f

FILES	= ft_printf.c \
		ft_putchar_p.c \
		ft_puts.c \
		ft_itoa.c \
		ft_putu.c \
		ft_putdi.c \
		

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clear all

.PHONY all clean fclean re
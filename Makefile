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

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

INCLUDES = -I$(HEADER_DIR)

HEADER_LIST = ./includes/ft_printf.h
HEADER_DIR = ./
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_LIST))

SOURCES_DIR = ./sources/
SOURCES_LIST =   ft_printf.c \
				ft_putchar_p.c \
				ft_putdi.c \
				ft_puthex.c \
				ft_putptr.c \
				ft_puts.c \
				ft_putu.c

SOURCES = $(addprefix $(SOURCES_DIR), $(SOURCES_LIST))
OBJECTS_DIR = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS = $(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
		@$(AR) $(NAME) $(OBJECTS) -o $@

$(OBJECTS_DIR):
	@mkdir -p $(OBJECTS_DIR)

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.c $(HEADER)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) -r $(OBJECTS) $(OBJECTS_DIR)

fclean: clean
		@$(RM) -f $(NAME) $(OBJECTS_DIR)

re: fclean all

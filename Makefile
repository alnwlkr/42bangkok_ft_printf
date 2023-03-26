# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panoma <panoma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:57:40 by panoma            #+#    #+#              #
#    Updated: 2023/03/26 20:21:38 by panoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
		ft_putaddr.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_base.c \
		ft_putstr.c \
		ft_putnbr_u.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : clean fclean all re
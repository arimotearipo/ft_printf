# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 00:14:58 by wwan-taj          #+#    #+#              #
#    Updated: 2021/07/01 17:07:20 by wwan-taj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_printf.c \
					ft_putchar.c \
					ft_putlowerhex.c \
					ft_putupperhex.c \
					ft_putnbr.c \
					ft_putstr.c \
					ft_putunsigned.c \
					ft_putaddr.c \

OBJS			=	$(SRCS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -rf

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
				
clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
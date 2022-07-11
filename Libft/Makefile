# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seokang <seokang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 15:27:07 by seokang           #+#    #+#              #
#    Updated: 2022/07/11 16:29:48 by seokang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c
OBJS = $(SRCS:.c=.o)


ifdef BONUSFLAG
	ALLOBJS 	= $(OBJS) $(OBJS_BONUS)
else
	ALLOBJS 	= $(OBJS)
endif

all: $(NAME)

$(NAME) : $(ALLOBJS)
	ar rcs $(NAME) $(ALLOBJS)

%.o: %.c
	$(cc) $(CFLAGS) -c $< -o $@

bonus:
	make BONUSFLAG=1
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: 
	$(make) fclean 
	$(make) all

.PHONY: all bonus clean fclean re
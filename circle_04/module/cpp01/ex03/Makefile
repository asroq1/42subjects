# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 16:26:23 by hyunjung          #+#    #+#              #
#    Updated: 2022/11/22 16:26:23 by hyunjung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./main.cpp \
		./HumanA.cpp HumanB.cpp \
		./Weapon.cpp \

CC = clang++
NAME = main

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:15:51 by hyunjung          #+#    #+#              #
#    Updated: 2022/11/16 16:25:30 by hyunjung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

CPP =  c++
RM = rm -rf
CPPFLAGS = -Werror -Wall -Wextra -std=c++98

HEADER = ./
SRCS_DIR = ./
SRCS = Account.cpp test.cpp

ALLSRCS = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(ALLSRCS:.cpp=.o)

all : $(NAME)

%.o	:	%.cpp
	$(CC) $(CPPFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME) : $(OBJS)
		$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	
clean : 
		$(RM) $(OBJS)
	
fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 11:28:15 by junykim           #+#    #+#              #
#    Updated: 2023/01/18 12:13:24 by junykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= megaphone
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
DEL			= rm -rf

# srcs
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# rules
all : $(NAME)

$(NAME) : 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean : 
	$(DEL) $(OBJS)

fclean : clean
	$(DEL) $(NAME)

re : fclean all

.PHONY : all re fclean clean
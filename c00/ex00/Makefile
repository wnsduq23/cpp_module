# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junykim <junykim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 11:28:15 by junykim           #+#    #+#              #
#    Updated: 2023/02/15 11:26:28 by junykim          ###   ########.fr        #
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

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean : 
	$(DEL) $(OBJS)

fclean : clean
	$(DEL) $(NAME)

re : fclean all

.PHONY : all re fclean clean
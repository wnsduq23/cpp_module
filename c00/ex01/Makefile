# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junykim <junykim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 15:34:57 by junykim           #+#    #+#              #
#    Updated: 2023/02/15 11:41:54 by junykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= PhoneBook
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
DEL			= rm -rf

# srcs
SRCS = Contact.cpp main.cpp PhoneBook.cpp
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
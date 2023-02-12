# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junykim <junykim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 14:07:08 by junykim           #+#    #+#              #
#    Updated: 2023/02/12 17:14:32 by junykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= AForm
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
DEL			= rm -rf

# srcs
SRCS = main.cpp AForm.cpp PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
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
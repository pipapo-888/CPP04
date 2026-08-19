# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/19 16:16:52 by knomura           #+#    #+#              #
#    Updated: 2026/08/19 16:56:12 by knomura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MMD -MP

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:%.cpp=%.o)

DEPS = $(OBJS:%.o=%.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
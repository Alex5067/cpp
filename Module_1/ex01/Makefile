# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 16:29:45 by igoraleksee       #+#    #+#              #
#    Updated: 2022/07/27 15:34:55 by igoraleksee      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Zombie.hpp

CXX	= c++
RM	= rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombieHorde

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
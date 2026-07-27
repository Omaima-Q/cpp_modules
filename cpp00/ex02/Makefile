# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 01:47:14 by omaimaqaroo       #+#    #+#              #
#    Updated: 2026/07/27 19:16:56 by omaimaqaroo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = Account.cpp tests.cpp\

OBJS = $(SRCS:.cpp=.o)
NAME = bank
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f

ifdef DEBUG
	CXXFLAGS += -g -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

debug:
	$(CXX) -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address  -o $(NAME) $(SRCS)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


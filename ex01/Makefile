# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 17:11:41 by ksellami          #+#    #+#              #
#    Updated: 2024/11/29 13:44:46 by ksellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all


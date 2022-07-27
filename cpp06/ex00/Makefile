# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 15:36:37 by ncarob            #+#    #+#              #
#    Updated: 2022/07/25 23:33:10 by ncarob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(wildcard ./*.cpp)

OBJS		=	$(SRCS:.cpp=.o)

INCLUDES	=	./

GCC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	convert

RM			= 	rm -f

%.o:	%.cpp $(wildcard ./*.hpp)
		$(GCC) $(FLAGS) -I$(INCLUDES) -c $< -o $@ 

$(NAME):	$(OBJS)
			$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

test:			
				./convert 0
				./convert 42
				./convert 42.
				./convert 42.f
				./convert nan
				./convert nanf
				./convert inf
				./convert inff
				./convert +inf
				./convert +inff
				./convert -inf
				./convert -inff
				./convert 2147483647
				./convert 2147483648
				./convert -2147483648
				./convert -2147483649
				./convert 2147483647.f
				./convert 2147483648.f
				./convert -2147483648.f
				./convert -2147483649.f
				./convert 2147483647.
				./convert 2147483648.
				./convert -2147483648.
				./convert -2147483649.
				./convert a
				./convert B
				./convert "~"
				./convert 126
				./convert test
				./convert 58
				./convert 101
				./convert 457846
				./convert 12544.545f
				./convert 541722.4172234234
				./convert 5417224172234234.f
				./convert 5417224172234234.

.PHONY:	all clean fclean re
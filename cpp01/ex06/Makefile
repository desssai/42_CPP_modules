# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 15:37:27 by ncarob            #+#    #+#              #
#    Updated: 2022/07/14 18:31:23 by ncarob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(wildcard ./*.cpp)

OBJS		=	$(SRCS:.cpp=.o)

INCLUDES	=	./

GCC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	harlFilter

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

.PHONY:	all clean fclean re
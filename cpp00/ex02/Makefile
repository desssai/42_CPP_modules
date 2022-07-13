# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 15:37:49 by ncarob            #+#    #+#              #
#    Updated: 2022/07/13 15:37:50 by ncarob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(wildcard ./*.cpp)

OBJS		=	$(SRCS:.cpp=.o)

INCLUDES	= 	./

GCC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	working_account

RM			= 	rm -f

%.o:	%.c $(INCLUDES)
		$(GCC) $(FLAGS) -c $< -o $@ 

$(NAME):	$(OBJS)
			$(GCC) $(FLAGS) $(OBJS) -I$(INCLUDES) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re

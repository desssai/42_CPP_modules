SRCS		=	$(wildcard ./*.cpp)

OBJS		=	$(SRCS:.cpp=.o)

GCC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	sed_for_losers

RM			= 	rm -f

%.o:	%.c
		$(GCC) $(FLAGS) -c $< -o $@ 

$(NAME):	$(OBJS)
			$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
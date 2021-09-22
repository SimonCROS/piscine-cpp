# Properties

NAME				= phonebook

# Commands

override CPPC		:= clang++
override CFLAGS		:= -Wall -Wextra -Werror
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\

override OBJS		:= $(SRCS:.cpp=.o)

# Rules

all:		$(NAME)

%.o:		%.cpp
			$(CPPC) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPPC) $(CFLAGS) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

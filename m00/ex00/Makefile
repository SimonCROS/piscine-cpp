# Properties

NAME				= megaphone

# Commands

override CPPC		:= clang++
override CFLAGS		:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				megaphone.cpp					\

override OBJS		:= $(SRCS:.cpp=.o)

# Rules

all:		$(NAME)

%.o:		%.cpp
			$(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPPC) $(CFLAGS) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

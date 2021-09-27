# Properties

NAME				= horde

# Commands

override CPPC		:= clang++
override CFLAGS		:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\
				Zombie.cpp						\
				ZombieHorde.cpp					\

override HEADERS	:=							\
				Zombie.hpp						\

override OBJS		:= $(SRCS:.cpp=.o)

# Rules

all:		$(NAME)

%.o:		%.cpp $(HEADERS)
			$(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPPC) $(CFLAGS) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

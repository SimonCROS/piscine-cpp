# Properties

NAME				= claptrap

# Commands

override CPPC		:= clang++
override CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\
				ClapTrap.cpp					\
				ScavTrap.cpp					\
				FragTrap.cpp					\
				DiamondTrap.cpp					\

override HEADERS	:=							\
				ClapTrap.hpp					\
				ScavTrap.hpp					\
				FragTrap.hpp					\
				DiamondTrap.hpp					\

override OBJS		:= $(SRCS:.cpp=.o)

# Rules

all:		$(NAME)

%.o:		%.cpp $(HEADERS)
			$(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPPC) $(CPPFLAGS) -o $@ $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

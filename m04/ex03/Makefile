# Properties

NAME				= materias

# Commands

override CPPC		:= clang++
override CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\
				AMateria.cpp					\
				Cure.cpp						\
				Ice.cpp							\
				Character.cpp					\
				MateriaSource.cpp				\

override HEADERS	:=							\
				AMateria.hpp					\
				Cure.hpp						\
				Ice.hpp							\
				ICharacter.hpp					\
				Character.hpp					\
				IMateriaSource.hpp				\
				MateriaSource.hpp				\

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

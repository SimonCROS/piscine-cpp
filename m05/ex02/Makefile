# Properties

NAME				= bureaucrat

# Commands

override CPPC		:= clang++
override CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\
				Bureaucrat.cpp					\
				Form.cpp						\
				ShrubberyCreationForm.cpp		\
				RobotomyRequestForm.cpp			\
				PresidentialPardonForm.cpp		\

override HEADERS	:=							\
				Bureaucrat.hpp					\
				Form.hpp						\
				ShrubberyCreationForm.hpp		\
				RobotomyRequestForm.hpp			\
				PresidentialPardonForm.hpp		\

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

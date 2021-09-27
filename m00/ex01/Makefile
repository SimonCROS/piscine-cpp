# Properties

NAME				= phonebook

# Commands

override CPPC		:= clang++
override CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98
override RM			:= rm -rf

# Sources

override SRCS		:=							\
				main.cpp						\
				Contact.cpp						\
				PhoneBook.cpp					\

override HEADERS	:=							\
				Contact.hpp						\
				PhoneBook.hpp					\

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

#ifndef __UTILS_H__
# define __UTILS_H__

# include <iostream>

# define TEXT_RESET		"\033[0m"
# define TEXT_BOLD		"\033[1m"

# define COLOR_RED		"\033[31m"
# define COLOR_GREEN	"\033[32m"
# define COLOR_YELLOW	"\033[33m"
# define COLOR_BLUE		"\033[34m"
# define COLOR_MAGENTA	"\033[35m"
# define COLOR_CYAN		"\033[36m"

# define maketext(name, color, effect) effect << color << name << TEXT_RESET

#endif

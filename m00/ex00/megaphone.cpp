#include <iostream>

int main(int argc, char const *argv[])
{
	std::string	str;
	int			i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
			str += argv[i];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str << std::endl;
	}
	return 0;
}

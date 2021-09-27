#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
	std::string	in_file;
	std::string	out_file;
	std::string	needle;
	std::string	replacement;
	
	if (argc != 4)
		return EXIT_FAILURE;
	in_file = argv[1];
	out_file = in_file + ".replace";
	needle = argv[2];
	replacement = argv[3];

	std::ifstream		ifs(in_file);
	std::stringstream	buffer;
	std::string			haystack;
	size_t				pos;

	if (ifs.fail())
		return EXIT_FAILURE;
	buffer << ifs.rdbuf();
	haystack = buffer.str();
	pos = 0;
	while ((pos = haystack.find(needle, pos)) != std::string::npos)
	{
		haystack.erase(pos, needle.length());
		haystack.insert(pos, replacement);
		pos += replacement.length();
	}
	ifs.close();

	std::ofstream		ofs(out_file);
	if (ofs.fail())
		return EXIT_FAILURE;
	ofs << haystack;

	ofs.close();
	return EXIT_SUCCESS;
}

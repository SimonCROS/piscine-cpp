#include "PhoneBook.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
	std::string	line;
	PhoneBook	book;

	while (getline(std::cin, line))
	{
		if (line == "ADD")
			book.addContact(Contact::prompt());
		else if (line == "SEARCH")
		{
			book.show();
		}
		else if (line == "EXIT")
			break ;
	}
	return 0;
}

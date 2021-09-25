#include "PhoneBook.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
	std::string	line;
	PhoneBook	book;
	int			id;

	while (getline(std::cin, line))
	{
		if (line == "ADD")
			book.addContact(Contact::prompt());
		else if (line == "SEARCH")
		{
			book.show();
			std::cout << "Select an id to display" << std::endl;
			while (!(std::cin >> id))
			{
				std::cout << "Please, enter a valid number" << std::endl;
				std::cin.clear();
        		std::cin.ignore(10000, '\n');
				std::cin >> id;
			}
			book.showContact(id);
		}
		else if (line == "EXIT")
			break ;
	}
	return 0;
}

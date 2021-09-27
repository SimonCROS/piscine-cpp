#include "PhoneBook.hpp"
#include <iostream>

int main( void ) {
	std::string	line;
	PhoneBook	book;
	int			id;

	std::cout << "Type one of these commands : ADD, SEARCH or EXIT" << std::endl;
	while (getline(std::cin, line))
	{
		if (line == "ADD")
			book.addContact(Contact::prompt());
		else if (line == "SEARCH")
		{
			if (book.isEmpty())
				std::cout << "The phonebook is empty." << std::endl;
			else
			{
				book.show();
				std::cout << "Select an id to display" << std::endl;
				while (!(std::cin >> id))
				{
					if (std::cin.eof())
						return 0;
					std::cout << "Please, enter a valid number" << std::endl;
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}
				std::cin.ignore(10000, '\n');
				book.showContact(id);
			}
		}
		else if (line == "EXIT")
			break ;
		std::cout << "Type one of these commands : ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}

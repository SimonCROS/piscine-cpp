#include "PhoneBook.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	std::string	line;
	contact		contacts[8];
	int			contact_amount;

	contact_amount = 0;
	while (getline(std::cin, line))
	{
		if (line == "ADD")
		{
			contacts[contact_amount] = (contact){

			}
			contact_amount++;
		}
		else if (line == "SEARCH")
		{
			
		}
		else if (line == "EXIT")
			break ;
	}
	return 0;
}


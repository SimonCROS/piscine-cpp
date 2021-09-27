#include "Contact.hpp"
#include <iostream>

Contact::Contact( void ) {}

Contact::Contact( std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret ) :
_firstName( firstName ), _lastName( lastName ), _nickname( nickname ), _phoneNumber( phoneNumber ), _darkestSecret( darkestSecret ) {}

Contact::~Contact( void ) {}

std::string Contact::getFirstName( void ) const {
	return this->_firstName;
}

std::string Contact::getLastName( void ) const {
	return this->_lastName;
}

std::string Contact::getNickname( void ) const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const {
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const {
	return this->_darkestSecret;
}

static void	prompt_line( std::string question, std::string *buffer )
{
	while (1)
	{
		std::cout << question;
		if (!getline(std::cin, *buffer))
			exit(0);
		if (!buffer->empty())
			break ;
		std::cout << "The field must not be empty. ";
	}
}

Contact	Contact::prompt( void ) {
	Contact contact;

	prompt_line("First name : ", &(contact._firstName));
	prompt_line("Last name : ", &(contact._lastName));
	prompt_line("Nickname : ", &(contact._nickname));
	prompt_line("Phone number : ", &(contact._phoneNumber));
	prompt_line("Darkest secret : ", &(contact._darkestSecret));

	return contact;
}

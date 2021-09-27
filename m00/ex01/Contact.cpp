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

Contact		Contact::prompt( void ) {
	Contact	contact;

	std::cout << "First name : ";
	if (!getline(std::cin, contact._firstName))
		exit(0);
	std::cout << "Last name : ";
	if (!getline(std::cin, contact._lastName))
		exit(0);
	std::cout << "Nickname : ";
	if (!getline(std::cin, contact._nickname))
		exit(0);
	std::cout << "Phone number : ";
	if (!getline(std::cin, contact._phoneNumber))
		exit(0);
	std::cout << "Darkest secret : ";
	if (!getline(std::cin, contact._darkestSecret))
		exit(0);

	return contact;
}

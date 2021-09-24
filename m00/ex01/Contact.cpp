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
	getline(std::cin, contact._firstName);
	std::cout << "Last name : ";
	getline(std::cin, contact._lastName);
	std::cout << "Nickname : ";
	getline(std::cin, contact._nickname);
	std::cout << "Phone number : ";
	getline(std::cin, contact._phoneNumber);
	std::cout << "Darkest secret : ";
	getline(std::cin, contact._darkestSecret);

	return contact;
}

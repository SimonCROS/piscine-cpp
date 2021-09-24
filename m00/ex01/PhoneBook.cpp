#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) : _size(0), _index(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::addContact( Contact contact ) {
	this->_size = std::min(this->_size + 1, 8);
	this->_index = this->_index % 8;
	this->_contacts[this->_index++] = contact;
}

void	PhoneBook::show( void ) const {
	Contact	contact;

	for (int i = 0; i < this->_size; i++)
		showLine(i, this->_contacts[i], i + 1 != this->_size);
}

void	PhoneBook::showEntry( std::string str ) const {
	int size = str.size();

	str = std::string(std::max(0, 10 - size), ' ') + str;
	if (size > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str;
}

void	PhoneBook::showLine( int id, Contact contact, bool interline ) const {
	showEntry(std::to_string(id));
	std::cout << "|";
	showEntry(contact.getFirstName());
	std::cout << "|";
	showEntry(contact.getLastName());
	std::cout << "|";
	showEntry(contact.getNickname());
	std::cout << "|";
	showEntry(contact.getPhoneNumber());
	std::cout << std::endl;
}

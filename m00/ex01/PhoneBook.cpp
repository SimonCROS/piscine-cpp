#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) : _index(0), _size(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::addContact( Contact contact ) {
	this->_size = std::min(this->_size + 1, 8);
	this->_index = this->_index % 8;
	this->_contacts[this->_index++] = contact;
}

void	PhoneBook::show( void ) const {
	Contact	contact;

	for (int i = 0; i < this->_size; i++)
		showLine(i, this->_contacts[i]);
}

void	PhoneBook::showEntry( std::string str ) const {
	int size = str.size();

	str = std::string(std::max(0, 10 - size), ' ') + str;
	if (size > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str;
}

void	PhoneBook::showContact( int id ) const {
	Contact	contact;

	if (id >= this->_size)
	{
		std::cout << "This id does not exist" << std::endl;
		return ;
	}

	contact = this->_contacts[id];
	std::cout << "First name : " << contact.getFirstName() << std::endl;
	std::cout << "Last name : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickname() << std::endl;
	std::cout << "Phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.getDarkestSecret() << std::endl;
}

void	PhoneBook::showLine( int id, Contact contact ) const {
	showEntry(std::to_string(id));
	std::cout << "|";
	showEntry(contact.getFirstName());
	std::cout << "|";
	showEntry(contact.getLastName());
	std::cout << "|";
	showEntry(contact.getNickname());
	std::cout << std::endl;
}

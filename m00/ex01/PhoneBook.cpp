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

	showHeader(!!this->_size);
	for (int i = 0; i < this->_size; i++)
		showLine(i, this->_contacts[i], i + 1 != this->_size);
	if (!this->_size)
		std::cout << "│ Phonebook is empty, run ADD command to add entries             │" << std::endl;
	showFooter(!!this->_size);
}

void	PhoneBook::showEntry( std::string str ) const {
	int size = str.size();

	str = std::string(std::max(0, 10 - size), ' ') + str;
	if (size > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str;
}

void	PhoneBook::showHeader( bool splitColumns ) const {
	std::cout << "┏━━━━━━━━━━━━┯━━━━━━━━━━━━┯━━━━━━━━━━━━┯━━━━━━━━━━━━┯━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┃ ";
	showEntry("Index");
	std::cout << " │ ";
	showEntry("First name");
	std::cout << " │ ";
	showEntry("Last name");
	std::cout << " │ ";
	showEntry("Nickname");
	std::cout << " │ ";
	showEntry("Phone number");
	std::cout << " ┃"  << std::endl;
	if (splitColumns)
		std::cout << "┡━━━━━━━━━━━━┿━━━━━━━━━━━━┿━━━━━━━━━━━━┿━━━━━━━━━━━━┿━━━━━━━━━━━━┩" << std::endl;
	else
		std::cout << "┡━━━━━━━━━━━━┷━━━━━━━━━━━━┷━━━━━━━━━━━━┷━━━━━━━━━━━━┷━━━━━━━━━━━━┩" << std::endl;
}

void	PhoneBook::showLine( int id, Contact contact, bool interline ) const {
	std::cout << "│ ";
	showEntry(std::to_string(id));
	std::cout << " │ ";
	showEntry(contact.getFirstName());
	std::cout << " │ ";
	showEntry(contact.getLastName());
	std::cout << " │ ";
	showEntry(contact.getNickname());
	std::cout << " │ ";
	showEntry(contact.getPhoneNumber());
	std::cout << " │"  << std::endl;
	if (interline)
		std::cout << "├┄┄┄┄┄┄┄┄┄┄┄┄┼┄┄┄┄┄┄┄┄┄┄┄┄┼┄┄┄┄┄┄┄┄┄┄┄┄┼┄┄┄┄┄┄┄┄┄┄┄┄┼┄┄┄┄┄┄┄┄┄┄┄┄┤" << std::endl;
}

void	PhoneBook::showFooter( bool splitColumns ) const {
	if (splitColumns)
		std::cout << "└────────────┴────────────┴────────────┴────────────┴────────────┘" << std::endl;
	else
		std::cout << "└────────────────────────────────────────────────────────────────┘" << std::endl;
}

#pragma once
#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( Contact contact );
	void	showContact( int id ) const;
	void	show( void ) const;

private:

	Contact		_contacts[8];
	int			_index;
	int			_size;

	void	showEntry( std::string str ) const;
	void	showLine( int id, Contact contact ) const;

};

#endif

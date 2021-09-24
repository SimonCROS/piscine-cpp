#pragma once
#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	Contact		*getContacts( void ) const;
	Contact		*addContact( void ) const;
	Contact		*addContact( void ) const;

private:

	Contact		contacts[8];
	int			size;

};

#endif

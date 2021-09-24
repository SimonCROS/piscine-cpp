#pragma once
#ifndef __CONTACT_H__
# define __CONTACT_H__

# include <iostream>

class Contact {

public:

	Contact( std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
	~Contact( void );

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getDarkestSecret( void ) const;

private:

	std::string	firstName;
	std::string	lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

};

#endif

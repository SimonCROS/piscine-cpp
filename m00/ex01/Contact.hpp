#ifndef __CONTACT_H__
# define __CONTACT_H__

# include <iostream>

class Contact {

public:

	Contact( void );
	Contact( std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret );
	~Contact( void );

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getDarkestSecret( void ) const;

	static Contact	prompt( void );

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

};

#endif

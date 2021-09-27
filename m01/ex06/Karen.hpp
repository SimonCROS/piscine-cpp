#ifndef __KAREN_H__
# define __KAREN_H__

# include <iostream>

class Karen
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	void	complain( std::string level );
};

#endif

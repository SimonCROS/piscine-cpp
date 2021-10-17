#ifndef __BRAIN_H__
# define __BRAIN_H__

# include "utils.hpp"

class Brain
{
private:
	std::string	ideas[100];

protected:

public:
	Brain( void );
	Brain( Brain const & src );
	~Brain( void );
	Brain &	operator=( Brain const & rhs );

	void		setIdea( unsigned short index, std::string idea );
	std::string	getIdea( unsigned short index ) const;
};

#endif

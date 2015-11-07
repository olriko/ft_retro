#ifndef MAP_HPP
# define MAP_HPP

# include "ft_retro.hpp"

class Map {

public:

	Map(unsigned int maxW, unsigned int maxH);
	Map(Map const & src);
	~Map(void);

	Map 					& operator=(Map const & rhs);

	unsigned int		getMaxW(void) const;
	unsigned int		getMaxH(void) const;
	void				setMaxW(unsigned int maxW);
	void				setMaxH(unsigned int maxH);

private:

	unsigned int					_maxW;	
	unsigned int					_maxH;
	//bool					_end;

	Map(void); // Don't call this bitch

};

std::ostream & operator<<(std::ostream & out, Map const & src);

#endif
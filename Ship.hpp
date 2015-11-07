#ifndef SHIP_HPP
# define SHIP_HPP

# include "ft_retro.hpp"

class Ship {

public:

	Ship(void);
	Ship(unsigned int w, unsigned int h, unsigned int hp, Map *map);
	Ship(Ship const & src);
	 ~Ship(void);
	unsigned int			getW(void) const;
	unsigned int			getH(void) const;
	unsigned int			getHp(void) const;
	void					setW(unsigned int x);
	void					setH(unsigned int y);
	void					setHp(unsigned int hp);
	void					setMap(Map *map);
	Ship 					& operator=(Ship const & rhs);

	void			move(unsigned int w, unsigned int h);
	//void			destroy(void);

protected:

	unsigned int					_w;
	unsigned int					_h;
	unsigned int					_hp;
	Map								*_map;
};

//std::ostream 	& operator<<(std::ostream & out, Ship const & src);

#endif

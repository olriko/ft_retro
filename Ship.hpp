#ifndef SHIP_HPP
# define SHIP_HPP

# include "ft_retro.hpp"

class Ship {

public:

	Ship(void);
	Ship(unsigned int w, unsigned int h, unsigned int hp);
	Ship(Ship const & src);
	 ~Ship(void);
	unsigned int			getW(void) const;
	unsigned int			getH(void) const;
	unsigned int			getHp(void) const;
	void					setW(unsigned int w);
	void					setH(unsigned int h);
	void					setHp(unsigned int hp);
	Ship 					& operator=(Ship const & rhs);

	void			move(unsigned int w, unsigned int h);
	//void			destroy(void);

protected:

	 int					_w;
	 int					_h;
	unsigned int			_hp;
};

//std::ostream 	& operator<<(std::ostream & out, Ship const & src);

#endif

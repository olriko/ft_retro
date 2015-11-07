#ifndef SHIP_HPP
# define SHIP_HPP

# include <ft_retro.hpp>

class Ship {

public:

	Ship(void);
	Ship(uint w, uint h, uint hp);
	Ship(Ship const & src);
	 ~Ship(void);
	uint					getW(void) const;
	uint					getH(void) const;
	uint					getHp(void) const;
	void					setW(uint x);
	void					setH(uint y);
	void					setHp(uint hp);
	Ship 					& operator=(Ship const & src);

	void			move(uint w, uint h);
	//void			destroy(void);

protected:

	uint					_w;
	uint					_h;
	uint					_hp;
};

std::ostream 	& operator<<(std::ostream & out, Ship const & src);

#endif

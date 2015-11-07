#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "ft_retro.hpp"
# include "Ship.hpp"
class Enemy : public  Ship {

public:

	Enemy(void);
	Enemy(unsigned int w, unsigned int h, unsigned int hp);
	Enemy(Enemy const & src);
	~Enemy(void);

	Enemy 			& operator=(Enemy const & src);
	void			destroy(void);
	void			move(unsigned int h);

private:

};

//std::ostream 				& operator<<(std::ostream & out, Enemy const & src);

#endif

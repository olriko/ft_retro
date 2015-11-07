#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <ft_retro.hpp>

class Enemy : public  Ship {

public:

	Enemy(void);
	Enemy(uint w, uint h, uint hp);
	Enemy(Enemy const & src);
	~Enemy(void);

	Enemy 			& operator=(Enemy const & src);
	void			destroy(void);
	void			move(uint h);

private:

};

std::ostream 				& operator<<(std::ostream & out, Enemy const & src);

#endif

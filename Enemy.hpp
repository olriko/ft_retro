#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "ft_retro.hpp"
# include "Ship.hpp"
# define MAX_ENEMY 	50
class Enemy : public  Ship {

public:

	Enemy(void);
	Enemy(int w, int h, int hp);
	Enemy(Enemy const & src);
	~Enemy(void);
	Enemy 			& operator=(Enemy const & rhs);
	Enemy  			&operator+=(int value);
	Enemy  			&operator-=(int value);
	void 			update_Position(Enemy enemy[MAX_ENEMY]);
	void 			gen_Mov();
	void 			create_Enemy(Enemy enemy[MAX_ENEMY], int w, int h);
	void 			check_Position(Enemy enemy[MAX_ENEMY]);

private:

};

//std::ostream 				& operator<<(std::ostream & out, Enemy const & src);

#endif

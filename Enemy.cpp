#include "ft_retro.hpp"
#include "Ship.hpp"
#include "Enemy.hpp"

Enemy::Enemy(void) : Ship(){
	return;
}

Enemy::Enemy(unsigned int w, unsigned int h, unsigned int hp) : Ship(w, h, hp){
	return;
}

Enemy::Enemy(Enemy const & src) : Ship(w, h, hp){
	*this = src;
	return ;
}

Enemy::~Enemy(void){
	return;
}

Enemy 			& operator=(Enemy const & src){
	setW(rhs.getW());
	setH(rhs.getH());
	setHp(rhs.getHp());
	return *this;
}

void			Enemy::move(int c, int max_w){
		if (c == KEY_RIGHT && this->_w < max_w)
			setW(this->_w + 1);
		else if (c == KEY_LEFT && this->_w > 0)
			setW(this->_w - 1);
}


//void			destroy(void);
void			Enemy::move(unsigned int h){
	setH(rhs.getH());
	setHp(rhs.getHp());	
	return *this;
}
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

//void			destroy(void);
void			Enemy::move(unsigned int h){
	setH(rhs.getH());
	setHp(rhs.getHp());	
	return *this;
}
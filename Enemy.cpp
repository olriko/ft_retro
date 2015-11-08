#include "ft_retro.hpp"
#include "Ship.hpp"
#include "Enemy.hpp"

Enemy::Enemy(void) : Ship(){
	this->_w = 1;
	this->_h = 1;
	this->_hp = 1;
	return;
}

Enemy::Enemy(int w, int h, int hp) : Ship(w, h, hp){
	
	this->_w = w;
	this->_h = h;
	this->_hp = 0;
	return;
}

Enemy::Enemy(Enemy const & src) : Ship(src){
	*this = src;
	return ;
}

Enemy::~Enemy(void){
	return;
}

Enemy 			& Enemy::operator=(Enemy const & rhs){
	setW(rhs.getW());
	setH(rhs.getH());
	setHp(rhs.getHp());
	return *this;
}

Enemy & Enemy::operator+=(int value)
{
	this->_h = this->_h + value;
	return (*this);
}

Enemy & Enemy::operator-=(int value)
{
	this->_h = this->_h - value;
	return (*this);
}


void Enemy::gen_Mov()
{
	if ( random() % 20 )
	{
			if ( this->getW() - 1 > 0 )
				this->setW( this->getW() - 1 );
			if ( this->getW() + 1 < MAX_W )
				this->setW( this->getW() + 1 );
			else
				return;
	}
}


void Enemy::create_Enemy(Enemy enemy[MAX_ENEMY], int w, int h){
	int i = 0;

	while (i < MAX_ENEMY)
	{
			if (enemy[i].getHp() <= 0)
			{	enemy[i].setW(w);
				enemy[i].setH(h);
				enemy[i].setHp(1);
				break;
			}
		i++;
	}
}

void Enemy::check_Position(Enemy enemy[MAX_ENEMY])
{
	int i = 0;

	while (i < MAX_ENEMY)
	{
		if (enemy[i].getH() > MAX_H) // < pour le tir player qui monte
			enemy[i].setHp(0); //destroy
		i++;
	}
}


void Enemy::update_Position(Enemy enemy[MAX_ENEMY])
{

	int i = 0;
	while (i < MAX_ENEMY)
	{
			if (enemy[i].getHp() > 0)
			{
				enemy[i] += 1; //enemey ++
				enemey[i].gen_Mov(); 
				mvprintw(b[i].getH(), b[i].getW(), ENEMY);
			}
			i++;
	}
}
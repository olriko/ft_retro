/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 10:38:54 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/08 12:19:22 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include "Player.hpp"

Player::Player(void) : Ship(){
	this->_w = 1;
	this->_h = MAX_H - 10;
	this->_hp = 5;
}
/*Player::Player(unsigned int w, unsigned int h,unsigned int hp) : Ship(w, h, hp){
	return;
}*/
Player::Player(Player const & src) : Ship(src){
	*this = src;
	return ;
}

Player::~Player(void){

}

Player 					& Player::operator=(Player const & rhs){
	setW(rhs.getW());
	setH(rhs.getH());
	setHp(rhs.getHp());	
	return *this;
}

void			Player::move(int c, int max_w){
		if (c == KEY_RIGHT && this->_w < max_w)
			setW(this->_w + 1);
		else if (c == KEY_LEFT && this->_w > 0)
			setW(this->_w - 1);
}

void		Player::shoot(void) {
	this->_hp -= 1;
}

/*
void			destroy(void){
	
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:10:38 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 23:26:11 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include "Player.hpp"

Player::Player(void) : Ship(){
	return;
}
Player::Player(unsigned int w, unsigned int h,unsigned int hp) : Ship(w, h, hp){
	return;
}
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
		clear();
}

/*
void			shoot(void) const{
	
}
void			destroy(void){
	
}
*/

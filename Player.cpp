/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:10:38 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 16:10:50 by cdeniau          ###   ########.fr       */
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

void			Player::ploum(int c){
	if (c)
	{
		setW(this->_w + 1);
	}

}

/*
void			shoot(void) const{
	
}
void			destroy(void){
	
}
*/
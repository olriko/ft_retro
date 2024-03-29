/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 12:19:28 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/08 12:19:38 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

Ship::Ship(void){
	setW(0);
	setH(0);
	setHp(1);
	return ;
}
Ship::Ship(unsigned int w, unsigned int h, unsigned int hp){
	setW(w);
	setH(h);
	setHp(hp);
	return ;
}

Ship::~Ship(void){

}
unsigned int					Ship::getW(void) const{
	return _w;
}
unsigned int					Ship::getH(void) const{
	return _h;
}
unsigned int					Ship::getHp(void) const{
	return _hp;
}
void					Ship::setW(unsigned int w){
	_w = w;
	return ;
}
void					Ship::setH(unsigned int h){
	_h = h;
	return ;
}
void					Ship::setHp(unsigned int hp){
	_hp = hp;
	return ;
}

void					Ship::move(unsigned int w, unsigned int h) {
	setW(w);
	setH(h);
	return ;
}

Ship 					&Ship::operator=(Ship const & rhs){
	setW(rhs.getW());
	setH(rhs.getH());
	return *this;
}

Ship::Ship(Ship const & src){
	*this = src;
	return ;
}

/*
void	Ship::setMap(Map *map){
	_map = map;
	return;
}

std::ostream 	& operator<<(std::ostream & o, Ship const & rhs){

	return o;
}*/

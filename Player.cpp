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

#include "dqh.hpp"
#include "Player.hpp"

Player(void) : Ship(){
	return;
}
Player(uint w, uint h,uint hp, uint dmg) : Ship(w, h, hp){
	return;
}
Player(Player const & src) : Ship(src){
	*this = src;
	return ;
}

~Player(void){

}

Player 					& operator=(Player const & src){
	setW(rhs.getW());
	setH(rhs.getH());
	setHp(rhs.getHp());	
	return *this;
}

void			move(uint w, uint h){
	/* compare (w param) < getMaxX de map
		setW(w);
		compare (h param) < getMaxY de map
	*/
}

/*
void			shoot(void) const{
	
}
void			destroy(void){
	
}
*/
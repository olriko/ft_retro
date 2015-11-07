/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:10:38 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 18:38:02 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"
#include "Ship.class.hpp"

Ship::Ship( std::string name ) : _name(name) {
//	std::cout << "Default constructor called" <<std::endl;
}

void Ship::setW( int w ) {
	this->_posW = w;
	std::cout << "setW=" << this->_posW << std::endl;
}

void Ship::setH( int h ) {
	std::cout << "setH=" << this->_posH << std::endl;
	this->_posH = h;
}

int	Ship::getW( void ) {
	return this->_posW;
}

std::string	Ship::getName( void ) {
	return this->_name;
}

int Ship::getH( void ) {
	return this->_posH;
}

Ship::~Ship() {
//	std::cout << "Destructor called" << std::endl;
}

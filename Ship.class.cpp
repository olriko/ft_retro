/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:10:38 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 17:39:34 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"

Ship::Ship( std::string name ) : _name(name) {
//	std::cout << "Default constructor called" <<std::endl;
}

Ship::setW( int w )
{
	this->_posW = w;
}

Ship::setH( int h )
{
	this->_posH = h;
}

int	Ship::getW( void )
{
	return this->_posW;
}

int Ship::getH( void )
{
	return this->_posH;
}

Ship::~Ship()
{
//	std::cout << "Destructor called" << std::endl;
}

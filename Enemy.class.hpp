/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:11:05 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 16:53:01 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

class Ship {

public:
	Ship( std::string name );
	Ship( Ship const &src);
	~Ship( void );
	Ship 			&operator=( Ship const& rhs );


private:
	unsigned int	_posX;  // quand l'ennemi arrive au niveau du vaisseau (3 de hauteur et environ 19 de large), on va chercher la pos du vaisseau et on la compare a celle ci
	unsigned int	_posY; // cette position est fixe, elle sert uniquement a la detection de collision
	unsigned int	_HealthPoints;
};

std::ostream		&operator<<( std::ostream &o, Ship const &rhs );

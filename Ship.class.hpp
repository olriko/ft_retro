/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:11:05 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 16:18:44 by cdeniau          ###   ########.fr       */
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
	unsigned int	_pos;
	unsigned int	_HealthPoints;
};

std::ostream		&operator<<( std::ostream &o, Ship const &rhs );

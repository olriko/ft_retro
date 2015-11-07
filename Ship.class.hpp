/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:11:05 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 18:38:26 by cdeniau          ###   ########.fr       */
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
//	Ship( Ship const &src);
	~Ship( void );
	Ship 			&operator=( Ship const& rhs );
	void			setW(int w);
	int				getW( void );
	void			setH(int h);
	int				getH( void );
	std::string		getName( void );

private:
	std::string		_name;
	unsigned int	_posW;
	unsigned int	_posH;
	unsigned int	_HealthPoints;
};

std::ostream		&operator<<( std::ostream &o, Ship const &rhs );

#endif

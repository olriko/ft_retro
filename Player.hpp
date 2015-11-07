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

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "ft_retro.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>


class Player : public Ship {

public:

	Player(void);
	Player(unsigned int w, unsigned int h,unsigned int hp);
	Player(Player const & src);
	~Player(void);

	Player 					& operator=(Player const & rhs);

	void			ploum(int c);
	//void			shoot(void) const;
	//void			destroy(void);

private:
	
};

//std::ostream 	& operator<<(std::ostream & out, Player const & src);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 14:20:22 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/08 14:20:23 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
# define PROJECTILE_HPP

# include "ft_retro.hpp"

class Projectile : public Ship {

public:

	Projectile(void);
	Projectile(int w, int h);
	Projectile(Projectile const & src);
	~Projectile(void);
	Projectile 					& operator=(Projectile const & src);
	int getW();
	int getH();
	void setW(int amount);
	void setH(int amount);


private:
	int _hp;
	int w;
	int h;

};


#endif

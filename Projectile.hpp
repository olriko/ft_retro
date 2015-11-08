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
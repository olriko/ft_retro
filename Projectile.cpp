#include "ft_retro.hpp"

Projectile(void) : _x(1), _y(1){

}
Projectile(int w, int h) : _w(w), _h(h),{

}
Projectile(Projectile const & src){

}
~Projectile(void){
	return;
}
Projectile & operator=(Projectile const & src){
	*this = src;
	return ;
}
int getW(){
	return this->_w;
}
int getH(){
	return this->_h;
}
void setW(int value){
	this->_w = value;
}
void setH(int value){
	this->_w = value;
}
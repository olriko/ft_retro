#include "ft_retro.hpp"

Map::Map(void) {
	setMaxW(40);
	setMaxH(40);
	return ;
}

Map::Map(unsigned int maxW, unsigned int maxH){ 
	setMaxW(maxX);
	setMaxH(maxY);
	return;
}
Map::Map(Map const & src){
	
	setMaxW(rhs.getMaxW(40));
	setMaxH(rhs.getMaxH(40));
	return *this;
}

Map::~Map(void){
	return ;
}

Map 					& Map::operator=(Map const & rhs){
	setMaxX(rhs.getMaxX());
	setMaxY(rhs.getMaxY());
}

unsigned int		Map::getMaxW(void) const{
	return this->_maxW;
}
unsigned int		Map::getMaxH(void) const{
	return this->_maxH
}
void				Map::setMaxW(unsigned int maxW){
	this->_maxW = maxW;
	return;
}
void				Map::setMaxH(unsigned int maxH){
	this->_maxH = maxH;
	return ;
}

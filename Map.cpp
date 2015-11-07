#include "ft_retro.hpp"

Map::Map(void) {
	setMaxW(40);
	setMaxH(40);
	return ;
}

Map::Map(unsigned int maxW, unsigned int maxH){ 
	setMaxW(maxW);
	setMaxH(maxH);
	return;
}
Map::Map(Map const & rhs){
	*this = rhs;
	return;
}

Map::~Map(void){
	return ;
}

Map 					& Map::operator=(Map const & rhs){
	setMaxW(rhs.getMaxW());
	setMaxH(rhs.getMaxH());
	return *this;
}

unsigned int		Map::getMaxW(void) const{
	return this->_maxW;
}
unsigned int		Map::getMaxH(void) const{
	return this->_maxH;
}
void				Map::setMaxW(unsigned int maxW){
	this->_maxW = maxW;
	return;
}
void				Map::setMaxH(unsigned int maxH){
	this->_maxH = maxH;
	return ;
}


/*	setMaxW(rhs.getMaxW());
	setMaxH(rhs.getMaxH());*/
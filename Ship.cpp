Ship::Ship(void){
	setX(0);
	setY(0);
	setHp(1);
	return ;
}
Ship::Ship(uint w, uint h, uint hp){
	setW(w);
	setH(h);
	setHp(hp);
	return ;
}

Ship::~Ship(void){

}
uint					Ship::getW(void) const{
	return _w;
}
uint					Ship::getH(void) const{
	return _h;
}
uint					Ship::getHp(void) const{
	return _hp;
}
void					Ship::setX(uint w){
	_w = w;
	return ;
}
void					Ship::setY(uint h){
	_h = h;
	return ;
}
void					Ship::setHp(uint hp){
	_hp = hp;
	return ;
}

void					Ship::move(uint w, uint h) {
	setW(w);
	setH(h);
	return ;
}

Ship 					& Ship::operator=(Ship const & src){
	setW(rhs.getW());
	setH(rhs.getH());
}

Ship::Ship(Ship const & src){
	*this = src;
	return ;
}


/*std::ostream 	& operator<<(std::ostream & o, Ship const & rhs){

	return o;
}*/
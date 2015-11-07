Enemy(void) : Ship(){
	return;
}
Enemy(uint w, uint h, uint hp) : Ship(w, h, hp){
	return;
}
Enemy(Enemy const & src) : Ship(w, h, hp){
	*this = src;
	return ;
}
~Enemy(void){
	return;
}

Enemy 			& operator=(Enemy const & src){
	setW(rhs.getW());
	setH(rhs.getH());
	setHp(rhs.getHp());
	return *this;
}

//void			destroy(void);
void			move(uint h){
	setH(rhs.getH());
	setHp(rhs.getHp());	
	return *this;
}
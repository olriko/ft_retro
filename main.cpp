/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:37:56 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/08 10:15:45 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include <string>
#include <chrono>
#include <thread>


void		scr_init( void ){

	int			max_y, max_x;

	initscr();
	curs_set(0); /* Hide cursor */
	getmaxyx(stdscr, max_y, max_x);
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}


void get_action(Player *player, Enemy *bullet ){

	int		c = 0;

	while ( (c = getch() ) != ERR )
	{	
		if (c)
		{
			if (c == KEY_RIGHT && player->getW() < MAX_W)
				player->setW(player->getW() + 1);
			else if (c == KEY_LEFT && player->getH() > 0)
				player->setW(player->getW() - 1);
			else if (c == ' ')
				bullet->create_Bullet(bullet, player->getW(), player->getH());
			else if (c == 27)
				exit(0);
		}
	}
}

void		random_generate(Enemy *enemy) {
	if (rand() % 6)
		enemy->create_Enemy(enemy, random() % MAX_W, 0);
}

void		scr_update( Player *player, Enemy *enemy, Enemy *bullet) {
	erase();	
	mvprintw(player->getH(), player->getW(), PLAYER);
	enemy->check_Position(enemy, player);
	bullet->check_Bullet(bullet, enemy);
	if (player->getHp() <= 0)
		exit(0);
	enemy->update_Position(enemy);
	bullet->update_Bullet(bullet);
	refresh();
}

void		ncurses_loop( Player *player, Enemy *enemy, Enemy *bullet) {
	struct timeval	st;
	struct timeval	end;
	while ( 1 )
	{
		gettimeofday(&st, NULL);
		get_action(player, bullet);
		random_generate(enemy);
		gettimeofday(&end, NULL);
		if (st.tv_usec < end.tv_usec)
			st.tv_usec = end.tv_usec;;
		usleep(( FRAME * 1000 ) - ( end.tv_usec - st.tv_usec ));
		scr_update(player, enemy, bullet);
	}
}


int 		main(void){
	Player 		*player = new Player;
	Enemy 		*enemy = new Enemy[MAX_ENEMY];
	Enemy 		*bullet = new Enemy[MAX_BULLET];

	srand( time(NULL) );
	scr_init();
	scr_update( player, enemy, bullet);
	ncurses_loop(player, enemy, bullet);
	return (0);
}

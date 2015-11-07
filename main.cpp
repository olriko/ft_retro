/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:37:56 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 17:40:00 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"
#include "Ship.class.hpp"
#include <string>

void		print_spaceship(Ship myShip)
{
	mvprintw(myShip.getH(), myShip.getW() - 6, "___---=======---___");
	mvprintw(myShip.getH() + 1, myShip.getW() - 8, "(=__\\   /.. ..\\   /__=)");
	mvprintw(myShip.getH() + 2, myShip.getW() - 3, "---\\__O__/---");
}

void		ft_newgame (Ship myShip)
{
	int		h;
	int		w;

	getmaxyx(stdscr, w, h);
	myShip.setW(w);
	myShip.setH(h);
}

void		ft_move(int c)
{
	if (c == KEY_RIGHT)
		; //operateur++
	else if (c == KEY_LEFT)
		; //operateur--
}

int			ft_refresh(void)
{
	clear();
	move(0, 0);
	refresh();
	return (1);
}

int			main(void)
{
	int		c;
	Ship	myShip("my_ship");

	initscr();
	ft_newgame(myShip);
	keypad(stdscr, true);
	while (1)
	{
		c = getch();
		if (c == 27)
			break ;
		ft_refresh();
		if (c == KEY_LEFT || c == KEY_LEFT)
			ft_move(c);//mvprintw(30, 30, "BJR");
		print_spaceship(myShip);
	//	printw("Window too small.\nThat's what she said.");
	}
	endwin();
	return (0);
}

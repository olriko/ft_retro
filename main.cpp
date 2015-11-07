/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:37:56 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 18:53:27 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include <string>
#include <chrono>
#include <thread>

void		print_spaceship(Player toto)
{
	mvprintw(toto.getH(), toto.getW() - 6, "___---=======---___");
	mvprintw(toto.getH() + 1, toto.getW() - 8, "(=__\\   /.. ..\\   /__=)");
	mvprintw(toto.getH() + 2, toto.getW() - 3, "---\\__O__/---");
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
	//	erase();
	move(0, 0);
	refresh();
	return (1);
}

int			main(void)
{
	int		c;
	
	Player	myPlayer(20 , 40, 1);

	initscr();
	keypad(stdscr, true);
	while (1)
	{
		c = getch();
		if (c == 27)
			break ;
		ft_refresh();
		myPlayer.ploum(c);
		print_spaceship(myPlayer);
		//	printw("Window too small.\nThat's what she said.");
	}
	endwin();
	return (0);
}

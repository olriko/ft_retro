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
/*)
void		ft_move(int c)
{
	if (c == KEY_RIGHT)
		; //operateur++
	else if (c == KEY_LEFT)
		; //operateur--
}
*/
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
	int max_h;
	int max_w;
	int i;
	i = 0;
	//Map				* map    = new Map(80, 50);	
	Player	myPlayer(20 , 40, 1);
	//WINDOW * win = newwin(50, 40, 0, 0);
	initscr();
	c = 0;
	keypad(stdscr, true);
	getmaxyx(stdscr, max_h, max_w);
	//myPlayer.setMap(map);
	while (1)
	{
		if ((c = getch()) != ERR)
		{
			if (c == 27)
				break ;
		}

		mvprintw(i % 5, 10, "coucou");
		i++;
		ft_refresh();
		usleep(50);
		//myPlayer.move(c, max_w);
		//print_spaceship(myPlayer);
		//	printw("Window too small.\nThat's what she said.");
	}
	endwin();
	return (0);
}

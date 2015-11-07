/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 15:37:56 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 16:51:08 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"
#include <string>

void		ft_spaceship(int w, int h)
{
	mvprintw(w, h - 6, "___---=======---___");
	mvprintw(w + 1, h - 8, "(=__\\   /.. ..\\   /__=)");
	mvprintw(w + 2, h - 3, "---\\__O__/---");
}

void		ft_newgame (void)
{
	int		w;
	int		h;

	getmaxyx(stdscr, w, h);
	mvprintw(20, 20, std::to_string(w).c_str()); // largeur
	mvprintw(22, 20, std::to_string(h).c_str()); // hauteur
	ft_spaceship(w - 4, h / 2);
}

void		ft_move(int c, int pos)
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

	initscr();
	ft_newgame();
	keypad(stdscr, true);
	while ((c = getch()))
	{
		if (c == 27)
			break ;
		if (c == KEY_LEFT || c == KEY_UP || c == KEY_LEFT || c == KEY_DOWN)
			ft_move(c);//mvprintw(30, 30, "BJR");
		ft_refresh();
	//	printw("Window too small.\nThat's what she said.");
	}
	endwin();
	return (0);
}

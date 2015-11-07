/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 14:59:00 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 15:26:27 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"
#include <string>

void		ft_spaceship(int x, int y)
{
	mvprintw(x, y, "//-A-\\\\");
	mvprintw(x + 1, y - 6, "___---=======---___");
	mvprintw(x + 2, y - 8, "(=__\\   /.. ..\\   /__=)");
	mvprintw(x + 3, y - 3, "---\\__O__/---");
}

void		ft_newgame (void)
{
	int		x;
	int		y;
	getmaxyx(stdscr, x, y);
	mvprintw(20, 20, std::to_string(x).c_str());
	mvprintw(22, 20, std::to_string(y).c_str());
	ft_spaceship(50, 50);
}

int			main(void)
{
	int		c;

	initscr();
	ft_newgame();
	while ((c = getch()))
	{
		if (c == 27)
			break ;
	}
	endwin();
	return (0);
}

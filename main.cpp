/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeniau <cdeniau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 14:59:00 by cdeniau           #+#    #+#             */
/*   Updated: 2015/11/07 15:08:39 by cdeniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dqh.hpp"
#include <stdio.h>

void		ft_newgame (void)
{
	int		x;
	int		y;
	getmaxyx(stdscr, x, y);
	printf("%d", x);
	printf("%d", y);
	mvprintw(y, x, "-");
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

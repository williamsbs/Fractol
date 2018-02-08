/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 10:04:39 by prossi            #+#    #+#             */
/*   Updated: 2018/02/05 17:27:49 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	ft_tabcolor_tds(t_var *var)
{
	var->draw.tab[11][0] = 0x000000;
	var->draw.tab[11][1] = 0x003300;
	var->draw.tab[11][2] = 0x006600;
	var->draw.tab[11][3] = 0x009900;
	var->draw.tab[11][4] = 0x00CC00;
	var->draw.tab[11][5] = 0x00FF00;
	var->draw.tab[11][6] = 0x99FF00;
	var->draw.tab[11][7] = 0x99CC00;
	var->draw.tab[11][8] = 0x999900;
	var->draw.tab[11][9] = 0x996600;
	var->draw.tab[11][10] = 0x993300;
	var->draw.tab[11][11] = 0x990000;
	var->draw.tab[11][12] = 0xCC0000;
	var->draw.tab[11][13] = 0xCC3300;
	var->draw.tab[11][14] = 0xCC6600;
	var->draw.tab[11][15] = 0xCC9900;
	var->draw.tab[11][16] = 0xCCCC00;
	var->draw.tab[11][17] = 0xCCFF00;
}

void	ft_tabcolor_td(t_var *var)
{
	var->draw.tab[10][0] = 0x000033;
	var->draw.tab[10][1] = 0x003333;
	var->draw.tab[10][2] = 0x006633;
	var->draw.tab[10][3] = 0x009933;
	var->draw.tab[10][4] = 0x00CC33;
	var->draw.tab[10][5] = 0x00FF33;
	var->draw.tab[10][6] = 0x99FF33;
	var->draw.tab[10][7] = 0x99CC66;
	var->draw.tab[10][8] = 0x999933;
	var->draw.tab[10][9] = 0x996633;
	var->draw.tab[10][10] = 0x993333;
	var->draw.tab[10][11] = 0x990033;
	var->draw.tab[10][12] = 0xCC0033;
	var->draw.tab[10][13] = 0xCC3333;
	var->draw.tab[10][14] = 0xCC6633;
	var->draw.tab[10][15] = 0xCC9933;
	var->draw.tab[10][16] = 0xCCCC33;
	var->draw.tab[10][17] = 0xCCFF33;
	ft_tabcolor_tds(var);
}

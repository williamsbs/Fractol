/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:42:52 by prossi            #+#    #+#             */
/*   Updated: 2018/02/05 17:30:41 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	ft_tabcolorssss(t_var *var)
{
	var->draw.tab[4][0] = 0x3300CC;
	var->draw.tab[4][1] = 0x3333CC;
	var->draw.tab[4][2] = 0x3366CC;
	var->draw.tab[4][3] = 0x3399CC;
	var->draw.tab[4][4] = 0x33CCCC;
	var->draw.tab[4][5] = 0x33FFCC;
	var->draw.tab[4][6] = 0x66FFCC;
	var->draw.tab[4][7] = 0x66CCCC;
	var->draw.tab[4][8] = 0x6699CC;
	var->draw.tab[4][9] = 0x6666CC;
	var->draw.tab[4][10] = 0x6633CC;
	var->draw.tab[4][11] = 0x6600CC;
	var->draw.tab[4][12] = 0xFF00CC;
	var->draw.tab[4][13] = 0xFF33CC;
	var->draw.tab[4][14] = 0xFF66CC;
	var->draw.tab[4][15] = 0xFF99CC;
	var->draw.tab[4][16] = 0xFFCCCC;
	var->draw.tab[4][17] = 0xFFFFCC;
	ft_tabcolor_sd(var);
}

void	ft_tabcolorsss(t_var *var)
{
	var->draw.tab[3][0] = 0x330099;
	var->draw.tab[3][1] = 0x333399;
	var->draw.tab[3][2] = 0x336699;
	var->draw.tab[3][3] = 0x339999;
	var->draw.tab[3][4] = 0x33CC99;
	var->draw.tab[3][5] = 0x33FF99;
	var->draw.tab[3][6] = 0x66FF99;
	var->draw.tab[3][7] = 0x66CC99;
	var->draw.tab[3][8] = 0x669999;
	var->draw.tab[3][9] = 0x666699;
	var->draw.tab[3][10] = 0x663399;
	var->draw.tab[3][11] = 0x660099;
	var->draw.tab[3][12] = 0xFF0099;
	var->draw.tab[3][13] = 0xFF3399;
	var->draw.tab[3][14] = 0xFF6699;
	var->draw.tab[3][15] = 0xFF9999;
	var->draw.tab[3][16] = 0xFFCC99;
	var->draw.tab[3][17] = 0xFFFF99;
	ft_tabcolorssss(var);
}

void	ft_tabcolorss(t_var *var)
{
	var->draw.tab[2][0] = 0x330066;
	var->draw.tab[2][1] = 0x333366;
	var->draw.tab[2][2] = 0x336666;
	var->draw.tab[2][3] = 0x339966;
	var->draw.tab[2][4] = 0x33CC66;
	var->draw.tab[2][5] = 0x33FF66;
	var->draw.tab[2][6] = 0x66FF66;
	var->draw.tab[2][7] = 0x66CC66;
	var->draw.tab[2][8] = 0x669966;
	var->draw.tab[2][9] = 0x666666;
	var->draw.tab[2][10] = 0x663366;
	var->draw.tab[2][11] = 0x660066;
	var->draw.tab[2][12] = 0xFF0066;
	var->draw.tab[2][13] = 0xFF3366;
	var->draw.tab[2][14] = 0xFF6666;
	var->draw.tab[2][15] = 0xFF9966;
	var->draw.tab[2][16] = 0xFFCC66;
	var->draw.tab[2][17] = 0xFFFF66;
	ft_tabcolorsss(var);
}

void	ft_tabcolors(t_var *var)
{
	var->draw.tab[1][0] = 0x330033;
	var->draw.tab[1][1] = 0x333333;
	var->draw.tab[1][2] = 0x336633;
	var->draw.tab[1][3] = 0x339933;
	var->draw.tab[1][4] = 0x33CC33;
	var->draw.tab[1][5] = 0x33FF33;
	var->draw.tab[1][6] = 0x66FF33;
	var->draw.tab[1][7] = 0x66CC33;
	var->draw.tab[1][8] = 0x669933;
	var->draw.tab[1][9] = 0x666633;
	var->draw.tab[1][10] = 0x663333;
	var->draw.tab[1][11] = 0x660033;
	var->draw.tab[1][12] = 0xFF0033;
	var->draw.tab[1][13] = 0xFF3333;
	var->draw.tab[1][14] = 0xFF6633;
	var->draw.tab[1][15] = 0xFF9933;
	var->draw.tab[1][16] = 0xFFCC33;
	var->draw.tab[1][17] = 0xFFFF33;
	ft_tabcolorss(var);
}

void	ft_tabcolor(t_var *var)
{
	var->draw.tab[0][0] = 0x330000;
	var->draw.tab[0][1] = 0x333300;
	var->draw.tab[0][2] = 0x336600;
	var->draw.tab[0][3] = 0x339900;
	var->draw.tab[0][4] = 0x33CC00;
	var->draw.tab[0][5] = 0x33FF00;
	var->draw.tab[0][6] = 0x66FF00;
	var->draw.tab[0][7] = 0x66CC00;
	var->draw.tab[0][8] = 0x669900;
	var->draw.tab[0][9] = 0x666600;
	var->draw.tab[0][10] = 0x663300;
	var->draw.tab[0][11] = 0x660000;
	var->draw.tab[0][12] = 0xFF0000;
	var->draw.tab[0][13] = 0xFF3300;
	var->draw.tab[0][14] = 0xFF6600;
	var->draw.tab[0][15] = 0xFF9900;
	var->draw.tab[0][16] = 0xFFCC00;
	var->draw.tab[0][17] = 0xFFFF00;
	ft_tabcolors(var);
}

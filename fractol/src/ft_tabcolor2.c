/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 16:09:36 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 16:14:06 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	ft_tabcolor_sdssss(t_var *var)
{
	var->draw.tab[9][0] = 0x000066;
	var->draw.tab[9][1] = 0x003366;
	var->draw.tab[9][2] = 0x006666;
	var->draw.tab[9][3] = 0x009966;
	var->draw.tab[9][4] = 0x00CC66;
	var->draw.tab[9][5] = 0x00FF66;
	var->draw.tab[9][6] = 0x99FF66;
	var->draw.tab[9][7] = 0x99CC66;
	var->draw.tab[9][8] = 0x999966;
	var->draw.tab[9][9] = 0x996666;
	var->draw.tab[9][10] = 0x993366;
	var->draw.tab[9][11] = 0x990066;
	var->draw.tab[9][12] = 0xCC0066;
	var->draw.tab[9][13] = 0xCC3366;
	var->draw.tab[9][14] = 0xCC6666;
	var->draw.tab[9][15] = 0xCC9966;
	var->draw.tab[9][16] = 0xCCCC66;
	var->draw.tab[9][17] = 0xCCFF66;
	ft_tabcolor_td(var);
}

void	ft_tabcolor_sdsss(t_var *var)
{
	var->draw.tab[8][0] = 0x000099;
	var->draw.tab[8][1] = 0x003399;
	var->draw.tab[8][2] = 0x006699;
	var->draw.tab[8][3] = 0x009999;
	var->draw.tab[8][4] = 0x00CC99;
	var->draw.tab[8][5] = 0x00FF99;
	var->draw.tab[8][6] = 0x99FF99;
	var->draw.tab[8][7] = 0x99CC99;
	var->draw.tab[8][8] = 0x999999;
	var->draw.tab[8][9] = 0x996699;
	var->draw.tab[8][10] = 0x993399;
	var->draw.tab[8][11] = 0x990099;
	var->draw.tab[8][12] = 0xCC0099;
	var->draw.tab[8][13] = 0xCC3399;
	var->draw.tab[8][14] = 0xCC6699;
	var->draw.tab[8][15] = 0xCC9999;
	var->draw.tab[8][16] = 0xCCCC99;
	var->draw.tab[8][17] = 0xCCFF99;
	ft_tabcolor_sdssss(var);
}

void	ft_tabcolor_sdss(t_var *var)
{
	var->draw.tab[7][0] = 0x0000CC;
	var->draw.tab[7][1] = 0x0033CC;
	var->draw.tab[7][2] = 0x0066CC;
	var->draw.tab[7][3] = 0x0099CC;
	var->draw.tab[7][4] = 0x00CCCC;
	var->draw.tab[7][5] = 0x00FFCC;
	var->draw.tab[7][6] = 0x99FFCC;
	var->draw.tab[7][7] = 0x99CCCC;
	var->draw.tab[7][8] = 0x9999CC;
	var->draw.tab[7][9] = 0x9966CC;
	var->draw.tab[7][10] = 0x9933CC;
	var->draw.tab[7][11] = 0x9900CC;
	var->draw.tab[7][12] = 0xCC00CC;
	var->draw.tab[7][13] = 0xCC33CC;
	var->draw.tab[7][14] = 0xCC66CC;
	var->draw.tab[7][15] = 0xCC99CC;
	var->draw.tab[7][16] = 0xCCCCCC;
	var->draw.tab[7][17] = 0xCCFFCC;
	ft_tabcolor_sdsss(var);
}

void	ft_tabcolor_sds(t_var *var)
{
	var->draw.tab[6][0] = 0x0000FF;
	var->draw.tab[6][1] = 0x0033FF;
	var->draw.tab[6][2] = 0x0066FF;
	var->draw.tab[6][3] = 0x0099FF;
	var->draw.tab[6][4] = 0x00CCFF;
	var->draw.tab[6][5] = 0x00FFFF;
	var->draw.tab[6][6] = 0x99FFFF;
	var->draw.tab[6][7] = 0x99CCFF;
	var->draw.tab[6][8] = 0x9999FF;
	var->draw.tab[6][9] = 0x9966FF;
	var->draw.tab[6][10] = 0x9933FF;
	var->draw.tab[6][11] = 0x9900FF;
	var->draw.tab[6][12] = 0xCC00FF;
	var->draw.tab[6][13] = 0xCC33FF;
	var->draw.tab[6][14] = 0xCC66FF;
	var->draw.tab[6][15] = 0xCC99FF;
	var->draw.tab[6][16] = 0xCCCCFF;
	var->draw.tab[6][17] = 0xCCFFFF;
	ft_tabcolor_sdss(var);
}

void	ft_tabcolor_sd(t_var *var)
{
	var->draw.tab[5][0] = 0x3300FF;
	var->draw.tab[5][1] = 0x3333FF;
	var->draw.tab[5][2] = 0x3366FF;
	var->draw.tab[5][3] = 0x3399FF;
	var->draw.tab[5][4] = 0x33CCFF;
	var->draw.tab[5][5] = 0x33FFFF;
	var->draw.tab[5][6] = 0x66FFFF;
	var->draw.tab[5][7] = 0x66CCFF;
	var->draw.tab[5][8] = 0x6699FF;
	var->draw.tab[5][9] = 0x6666FF;
	var->draw.tab[5][10] = 0x6633FF;
	var->draw.tab[5][11] = 0x6600FF;
	var->draw.tab[5][12] = 0xFF00FF;
	var->draw.tab[5][13] = 0xFF33FF;
	var->draw.tab[5][14] = 0xFF66FF;
	var->draw.tab[5][15] = 0xFF99FF;
	var->draw.tab[5][16] = 0xFFCCFF;
	var->draw.tab[5][17] = 0xFFFFFF;
	ft_tabcolor_sds(var);
}

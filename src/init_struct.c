/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:36:05 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 13:53:28 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	init_struct_mandel(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = 2;
	var->draw.iteration_max = 50;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 0;
	var->draw.g = 0;
	var->draw.b = 0;
	var->draw.color = 1;
	var->draw.op = 7;
	ft_mandelbrot(var);
}

void	init_struct_tricon(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = -2;
	var->draw.iteration_max = 50;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 0;
	var->draw.g = 0;
	var->draw.b = 0;
	var->draw.op = 7;
	var->draw.color = 2;
	ft_tricorn(var);
}

void	init_struct_julia(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.c_r = -0.75;
	var->draw.c_i = -0.14;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = 2;
	var->draw.iteration_max = 100;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 25;
	var->draw.g = 220;
	var->draw.b = 25;
	var->draw.op = 7;
	var->draw.color = 1;
	ft_julia(var);
}

void	init_struct_flower(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.c_r = -0.55;
	var->draw.c_i = -0.55;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = 2;
	var->draw.iteration_max = 73;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 245;
	var->draw.g = 0;
	var->draw.b = 245;
	var->draw.op = 7;
	var->draw.color = 1;
	ft_flower(var);
}

void	init_struct(t_var *var)
{
	ft_tabcolor(var);
	var->draw.var_mouse = 0;
	var->draw.num = 0;
	var->draw.lave = 0;
	var->draw.lave = 1;
	if (var->draw.fract == 1)
		init_struct_mandel(var);
	if (var->draw.fract == 2)
		init_struct_tricon(var);
	if (var->draw.fract == 3)
		init_struct_julia(var);
	if (var->draw.fract == 4)
		init_struct_flower(var);
	if (var->draw.fract == 5)
		init_struct_bubble(var);
	if (var->draw.fract == 6)
		init_struct_burningship(var);
	if (var->draw.fract == 7)
		init_struct_mandel2(var);
	if (var->draw.fract == 8)
		init_struct_julia2(var);
	if (var->draw.fract == 9)
		init_struct_mandel_psy(var);
	if (var->draw.fract == 10)
		init_struct_psy(var);
}

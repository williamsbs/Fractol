/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:45:01 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 16:16:09 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	init_struct_bubble(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.c_r = -1.25;
	var->draw.c_i = 0.0;
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
	var->draw.color = 3;
	ft_bubble(var);
}

void	init_struct_burningship(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.c_r = -1.25;
	var->draw.c_i = 0.0;
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
	ft_burningship(var);
}

void	init_struct_mandel2(t_var *var)
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
	ft_mandelbrot2(var);
}

void	init_struct_julia2(t_var *var)
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
	var->draw.fmv = 1.95;
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

void	init_struct_mandel_psy(t_var *var)
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
	ft_mandelbrot_psy(var);
}

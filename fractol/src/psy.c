/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psy.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:35:56 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 16:59:42 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

static void	ft_color(t_var *var)
{
	if (var->draw.iteration_max < 2)
		ft_exit(1);
	(var->draw.i == var->draw.iteration_max) ? mlx_pixel_put_to_image(\
var->draw, var->draw.x, var->draw.y, var->draw.tab[9][var->draw.lave] - \
(var->draw.y * var->draw.x)) : \
mlx_pixel_put_to_image(var->draw, var->draw.x, var->draw.y, \
	var->draw.tab[9][var->draw.lave] - (var->draw.y * var->draw.x));
}

static void	ft_psy1(t_var *var)
{
	while (var->draw.y++ < WIN_Y)
	{
		var->draw.c_r = (var->draw.x / var->draw.zoom + var->draw.x1) + \
		var->draw.movex;
		var->draw.c_i = (var->draw.y / var->draw.zoom + var->draw.y1) + \
		var->draw.movey;
		var->draw.z_r = 0;
		var->draw.z_i = 0;
		var->draw.i = 0;
		while ((var->draw.z_r * var->draw.z_r + var->draw.z_i * \
	var->draw.z_i < var->draw.op) && (var->draw.i < var->draw.iteration_max))
		{
			var->draw.tmp = var->draw.z_r;
			var->draw.z_r = var->draw.z_r * var->draw.z_r - var->draw.z_i *\
			var->draw.z_i + var->draw.c_r;
			var->draw.z_i = var->draw.fmv * var->draw.z_i * var->draw.tmp + \
			var->draw.c_i;
			var->draw.i = var->draw.i + 1;
		}
		ft_color(var);
	}
}

void		ft_psy(t_var *var)
{
	var->draw.x = 0;
	while (var->draw.x++ < WIN_X)
	{
		var->draw.y = 0;
		ft_psy1(var);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 17:49:50 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 16:58:13 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

static void	ft_color(t_var *var)
{
	if (var->draw.color == 1)
	{
		var->draw.back_b = 20;
		var->draw.back_g = 20;
		var->draw.back_r = var->draw.i * 600 / var->draw.iteration_max;
	}
	if (var->draw.color == 2)
	{
		var->draw.back_r = 20;
		var->draw.back_b = 20;
		var->draw.back_g = var->draw.i * 600 / var->draw.iteration_max;
	}
	if (var->draw.color == 3)
	{
		var->draw.back_r = 20;
		var->draw.back_g = 20;
		var->draw.back_b = var->draw.i * 600 / var->draw.iteration_max;
	}
}

static void	ft_bubble1(t_var *var)
{
	while (var->draw.y++ < WIN_Y)
	{
		var->draw.z_r = (var->draw.x / var->draw.zoom + var->draw.x1)\
		+ var->draw.movex;
		var->draw.z_i = (var->draw.y / var->draw.zoom + var->draw.y1)\
		+ var->draw.movey;
		var->draw.i = 0;
		while ((var->draw.z_r * var->draw.z_r + var->draw.z_i *\
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
		(var->draw.i == var->draw.iteration_max) ? \
		mlx_pixel_put_to_image(var->draw, var->draw.x, var->draw.y, \
			rgb_to_hexa(var)) : mlx_pixel_put_to_image(var->draw, var->draw.x,\
				var->draw.y, rgb_to_hexa2(var->draw.back_r, var->draw.back_g, \
					var->draw.back_b));
	}
}

void		ft_bubble(t_var *var)
{
	var->draw.x = 0;
	while (var->draw.x++ < WIN_X)
	{
		var->draw.y = 0;
		ft_bubble1(var);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rool_hook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:37:05 by vguerand          #+#    #+#             */
/*   Updated: 2018/02/06 17:36:05 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

static void	roll_hook2(t_var *var)
{
	if (var->draw.iteration_max < 2)
		init_struct(var);
	if (var->draw.fract == 1)
		ft_mandelbrot(var);
	if (var->draw.fract == 2)
		ft_tricorn(var);
	if (var->draw.fract == 3)
		ft_julia(var);
	if (var->draw.fract == 4)
		ft_flower(var);
	if (var->draw.fract == 5)
		ft_bubble(var);
	if (var->draw.fract == 6)
		ft_burningship(var);
	mlx_put_image_to_window(var->draw.mlx, var->draw.win, \
		var->draw.img, 0, 0);
}

static void	roll_hook1(int button, int x, int y, t_var *var)
{
	if (x > 0 && x < WIN_X && y > 0 && y < WIN_Y)
	{
		if (button == 1 || button == 4)
		{
			var->draw.zoom *= 1.1;
			var->draw.x1 = var->draw.x1 + ((double)x - ((double)WIN_X / 2)) \
			/ var->draw.zoom;
			var->draw.y1 = var->draw.y1 + ((double)y - ((double)WIN_Y / 2)) \
			/ var->draw.zoom;
		}
		if (button == 2 || button == 5)
		{
			var->draw.zoom *= 0.9;
			var->draw.x1 = var->draw.x1 + ((double)x - ((double)WIN_X / 2)) \
			/ var->draw.zoom;
			var->draw.y1 = var->draw.y1 + ((double)y - ((double)WIN_Y / 2)) \
			/ var->draw.zoom;
		}
		mlx_destroy_image(var->draw.mlx, var->draw.img);
		var->draw.img = mlx_new_image(var->draw.mlx, WIN_X, WIN_Y);
		var->draw.map = mlx_get_data_addr(var->draw.img, &var->draw.bpp, \
		&var->draw.size_line, &var->draw.endian);
		roll_hook2(var);
	}
}

int			roll_hook(int button, int x, int y, t_var *var)
{
	roll_hook1(button, x, y, var);
	return (0);
}

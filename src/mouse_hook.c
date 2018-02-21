/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 14:59:47 by vguerand          #+#    #+#             */
/*   Updated: 2018/02/08 13:57:03 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

static void	mouse_hook2(t_var *var)
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

static void	mouse_hook1(int x, int y, t_var *var)
{
	if (x < (WIN_X) && y < (WIN_Y))
	{
		var->draw.c_r = (x < var->draw.mouse_x) ? (var->draw.c_r + 0.01) : \
		(var->draw.c_r - 0.01);
		var->draw.c_i = (y < var->draw.mouse_y) ? (var->draw.c_i + 0.01) : \
		(var->draw.c_i - 0.01);
	}
	mlx_destroy_image(var->draw.mlx, var->draw.img);
	var->draw.img = mlx_new_image(var->draw.mlx, WIN_X, WIN_Y);
	var->draw.map = mlx_get_data_addr(var->draw.img, &var->draw.bpp, \
	&var->draw.size_line, &var->draw.endian);
	mouse_hook2(var);
}

int			mouse_hook(int x, int y, t_var *var)
{
	if (x >= 0 && x <= WIN_X && y >= 0 && y <= WIN_Y)
	{
		if (var->draw.var_mouse == 1)
			mouse_hook1(x, y, var);
		var->draw.mouse_x = x;
		var->draw.mouse_y = y;
	}
	return (0);
}

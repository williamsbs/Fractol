/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:36:11 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 14:34:45 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

int	my_key_funct2(t_var *var)
{
	if (var->draw.fract == 5)
		ft_bubble(var);
	if (var->draw.fract == 6)
		ft_burningship(var);
	if (var->draw.fract == 7)
		ft_mandelbrot2(var);
	if (var->draw.fract == 8)
		ft_julia2(var);
	if (var->draw.fract == 9)
		ft_mandelbrot_psy(var);
	if (var->draw.fract == 10)
		ft_psy(var);
	if (var->draw.fract == 11)
		ft_mega_psy(var);
	mlx_put_image_to_window(var->draw.mlx, var->draw.win, \
		var->draw.img, 0, 0);
	return (0);
}

int	my_key_funct(int keycode, t_var *var)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 45)
		var->draw.var_mouse += 1;
	if (keycode == 46)
		var->draw.var_mouse -= 1;
	ft_keyfunc(keycode, var);
	mlx_destroy_image(var->draw.mlx, var->draw.img);
	var->draw.img = mlx_new_image(var->draw.mlx, WIN_X, WIN_Y);
	var->draw.map = mlx_get_data_addr(var->draw.img, &var->draw.bpp, \
		&var->draw.size_line, &var->draw.endian);
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
	my_key_funct2(var);
	return (0);
}

int	main(int argc, char **av)
{
	t_var var;

	if (argc == 2)
	{
		ft_witch_fract(av, &var);
		if (var.draw.error != 1)
			ft_exit(0);
		var.draw.mlx = mlx_init();
		var.draw.img = mlx_new_image(var.draw.mlx, WIN_X, WIN_Y);
		var.draw.map = mlx_get_data_addr(var.draw.img, &var.draw.bpp, \
			&var.draw.size_line, &var.draw.endian);
		init_struct(&var);
		var.draw.win = mlx_new_window(var.draw.mlx, WIN_X, WIN_Y, av[1]);
		mlx_put_image_to_window(var.draw.mlx, var.draw.win, var.draw.img, 0, 0);
		var.draw.presst = "PRESS T";
		mlx_string_put(var.draw.mlx, var.draw.win, 400, 20, 0xFFFFFF, \
			var.draw.presst);
		mlx_hook(var.draw.win, 2, (1L << 0), my_key_funct, &var);
		mlx_hook(var.draw.win, 6, (1L << 6), mouse_hook, &var);
		mlx_hook(var.draw.win, 4, (1L << 2), roll_hook, &var);
		mlx_loop(var.draw.mlx);
	}
	else
		ft_exit(0);
	return (0);
}

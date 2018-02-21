/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 12:23:22 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 14:31:23 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

int		key(int keycode)
{
	if (keycode == 53)
		exit(1);
	return (0);
}

void	ft_aff4(t_var *var)
{
	mlx_string_put(var->win.init, var->win.wdow, 175, 660, 0xFFFFFF, \
		"|  to active/desactive mouse presse 'm' 'n'  |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 680, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 700, 0xFFFFFF, \
		"|         to reset fractol press 'delete'    |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 720, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 740, 0xFFFFFF, \
		"|        You can shut down with 'esc'        |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 760, 0xFFFFFF, \
		" -------------------------------------------- ");
	mlx_hook(var->win.wdow, 2, (1L << 0), key, &var);
	mlx_loop(var->win.init);
}

void	ft_aff3(t_var *var)
{
	mlx_string_put(var->win.init, var->win.wdow, 175, 440, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 460, 0xFFFFFF, \
		"|         to make red press        '4'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 480, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 500, 0xFFFFFF, \
		"|         to make dark blue press  '5'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 520, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 540, 0xFFFFFF, \
		"|         to make green press      '6'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 560, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 580, 0xFFFFFF, \
		"|         to make black press      '7'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 600, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 620, 0xFFFFFF, \
		"|         make fractol go nuts '8, 9, 0, -'  |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 640, 0xFFFFFF, \
		"|                                            |");
	ft_aff4(var);
}

void	ft_aff2(t_var *var)
{
	mlx_string_put(var->win.init, var->win.wdow, 175, 220, 0xFFFFFF, \
		"|Change color with '1, 2, 3 ,4 ,5 ,6 &'d' 's'|");
	mlx_string_put(var->win.init, var->win.wdow, 175, 240, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 260, 0xFFFFFF, \
		"| Change fractol with number pad '1-9 & z, x'|");
	mlx_string_put(var->win.init, var->win.wdow, 175, 280, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 300, 0xFFFFFF, \
		"|         You can zoom with 'q' & 'a'        |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 320, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 340, 0xFFFFFF, \
		"|         to make pink press       '1'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 360, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 380, 0xFFFFFF, \
		"|         to do somthing IDKW  'o' 'p'       |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 400, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 420, 0xFFFFFF, \
		"|         to make light blue press '3'       |");
	ft_aff3(var);
}

void	ft_aff(t_var *var)
{
	var->win.init = mlx_init();
	var->win.wdow = mlx_new_window(var->win.init, 800, 800, "COMMANDE");
	mlx_string_put(var->win.init, var->win.wdow, 175, 20, 0xFFFFFF, \
		" -------------------------------------------- ");
	mlx_string_put(var->win.init, var->win.wdow, 175, 40, 0xFFFFFF, \
		"|                            ^               |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 60, 0xFFFFFF, \
		"|            You can move  <   >             |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 80, 0xFFFFFF, \
		"|                            v               |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 100, 0xFFFFFF, \
		"|        Change iteration with '/' & '*'     |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 120, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 140, 0xFFFFFF, \
		"|         Change shape with '+' & '-'        |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 160, 0xFFFFFF, \
		"|                                            |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 180, 0xFFFFFF, \
		"|  change background color with 'r' 'g' 'b'  |");
	mlx_string_put(var->win.init, var->win.wdow, 175, 200, 0xFFFFFF, \
		"|                                            |");
	ft_aff2(var);
}

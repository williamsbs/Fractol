/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:36:39 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 16:38:12 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRACT_H
# define __FRACT_H
# define WIN_X 800
# define WIN_Y 800

# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"
# include "math.h"

typedef struct		s_window
{
	void			*init;
	void			*wdow;
}					t_window;

typedef struct		s_draw
{
	int				lave;
	int				r;
	int				g;
	int				b;
	int				back_r;
	int				back_g;
	int				back_b;
	int				color;
	int				size;
	int				val;
	long double		x;
	long double		y;
	long double		x1;
	long double		y1;
	long double		x2;
	long double		y2;
	int				zoom;
	long double		image_x;
	long double		image_y;
	long double		movex;
	long double		movey;
	long double		z_r;
	double			z_i;
	long double		c_r;
	long double		c_i;
	int				i;
	long double		stuff;
	int				exit;
	int				type;
	long double		start;
	long double		end;
	double			tmp;
	void			*mlx;
	void			*win;
	int				var;
	int				withfract;
	int				iteration_max;
	int				mouse_x;
	int				mouse_y;
	int				var_mouse;
	void			*img;
	char			*map;
	int				bpp;
	int				size_line;
	int				endian;
	long double		fmv;
	int				fract;
	char			*presst;
	int				error;
	int				la;
	int				num;
	int				op;
	int				k;
	int				tab[217][217];
}					t_draw;

typedef struct		s_var
{
	t_draw			draw;
	t_window		win;
}					t_var;

int					rgb_to_hexa(t_var *var);
int					rgb_to_hexa2(int r, int g, int b);
void				init_color(t_var *var);
void				ft_flower(t_var *var);
void				ft_bubble(t_var *var);
void				ft_mega_psy(t_var *var);
void				init_struct_bubble(t_var *var);
void				init_struct_burningship(t_var *var);
void				init_struct_mandel2(t_var *var);
void				init_struct_julia2(t_var *var);
void				init_struct_mandel_psy(t_var *var);
void				init_struct_psy(t_var *var);
void				init_struct_mega_psy(t_var *var);
void				ft_aff(t_var *var);
void				mlx_pixel_put_to_image(t_draw draw, int x, int y, \
					int color);
void				ft_mandelbrot(t_var *var);
void				ft_mandelbrot2(t_var *var);
void				ft_mandelbrot_psy(t_var *var);
void				ft_psy(t_var *var);
void				ft_tricorn(t_var *var);
void				ft_julia(t_var *var);
void				ft_julia2(t_var *var);
void				ft_burningship(t_var *var);
int					mouse_hook(int x, int y, t_var *var);
int					roll_hook(int button, int x, int y, t_var *var);
void				ft_tabcolor(t_var *var);
void				ft_tabcolor_sd(t_var *var);
void				ft_tabcolor_td(t_var *var);
void				init_struct(t_var *var);
void				ft_witch_fract(char **argv, t_var *var);
int					ft_keyfunc(int keycode, t_var *var);
int					ft_keyfunc5(int keycode, t_var *var);
int					ft_exit(int i);
int					key(int keycode);

#endif

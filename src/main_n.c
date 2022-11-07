/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:42:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/11/07 10:43:38 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

int	main_n(int ac, char **av)
{
	t_data	d;
	int		fd;

	(void)ac;
	(void)fd;
	(void)av;
	init_map(&d);

	d.pposx = 3;
	d.pposy = 2;
	d.pos = 'W';

	printf("hello?\n");
	map2d(&d);
	player_angle(&d);

	// mlx_put_image_to_window(d.mlx, d.win, d.m2d->img, 0, 0);
	mlx_key_hook(d.win, key_on, &d);
	mlx_loop_hook(d.mlx, update_img, &d);
	// mlx_hook(bd.win, X_BTN, 0, close_win, &bd);
	mlx_loop(d.mlx);

	return (SUCCESS);
}

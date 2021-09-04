/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:37:53 by mdude             #+#    #+#             */
/*   Updated: 2021/01/28 12:37:55 by mdude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_pos		get_pos(t_player *pl)
{
	t_pos	pos;

	pos.x = pl->pos.x;
	pos.y = pl->pos.y;
	return (pos);
}

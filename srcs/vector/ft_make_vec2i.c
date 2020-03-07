/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_vec2i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 12:05:17 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/07 12:05:57 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec2i	ft_make_vec2i(int x, int y)
{
	t_vec2i v;

	v.x = x;
	v.y = y;
	return (v);
}
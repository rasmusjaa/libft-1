/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invert_vec2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:36:33 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/07 15:36:47 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vec2	ft_invert_vec2(t_vec2 v)
{
	v.x = -v.x;
	v.y = -v.y;
	return (v);
}

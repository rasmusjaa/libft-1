/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:47:41 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/16 14:16:08 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec3			make_vec3(double x, double y, double z);
void			set_vec3(t_vec3 *v, double x, double y, double z);
t_vec3			add_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			sub_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			mul_vec3(t_vec3 v, double t);
t_vec3			mul_vec3_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			div_vec3(t_vec3 v, double t);
double			len_vec3(t_vec3 v1);
double			dot_vec3(t_vec3 v1, t_vec3 v2);
t_vec3			normalize_vec3(t_vec3 v);
t_vec3			invert_vec3(t_vec3 v);
t_vec3			reflect_vec3(t_vec3 v, t_vec3 n);

#endif

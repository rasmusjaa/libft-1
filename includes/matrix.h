/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:46:30 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/21 11:06:04 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

typedef struct		s_mat4x4
{
	float			m[4][4];
}					t_mat4x4;

t_mat4x4	ft_ident_mat4(void);
t_mat4x4	ft_mul_mat4_mat4(t_mat4x4 a, t_mat4x4 b);
t_vec3		ft_mul_vec3_mat4(t_vec3 in, t_mat4x4 m);

t_mat4x4	ft_trs_mat4(t_vec3 pos, t_vec3 rot, t_vec3 scale);

t_mat4x4	ft_create_trans_mat4(t_vec3 translation);
t_mat4x4	ft_create_scale_mat4(t_vec3 scale);

t_mat4x4	ft_create_rotx_mat4(float angle);
t_mat4x4	ft_create_roty_mat4(float angle);
t_mat4x4	ft_create_rotz_mat4(float angle);
t_mat4x4	ft_create_rot_mat4(t_vec3 deg_angle);


t_mat4x4	ft_trs_mat4(t_vec3 pos, t_vec3 rot, t_vec3 scale);
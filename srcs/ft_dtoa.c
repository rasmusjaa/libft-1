/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 10:36:01 by wkorande          #+#    #+#             */
/*   Updated: 2019/11/21 12:54:18 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_fractoa(double d, int precision)
{
	char	*str;
	double	nbr;
	int		i;
	int		len;

	if (d < 0)
		d = -d;
	nbr = d - (int)d;
	len = 50;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_bzero(str, len + 1);
	i = 0;
	while (precision--)
	{
		nbr *= 10;
		str[i++] = ((int)nbr % 10) + '0';
	}
	return (str);
}

char		*ft_dtoa(double d, int precision)
{
	char	*str;
	char	*ds;
	char	*fs;

	if (!precision)
		return (ft_itoa((int)d));
	ds = ft_itoa((int)d);
	fs = ft_fractoa(d, precision);
	ds = ft_strjoin(ds, ".");
	str = ft_strjoin(ds, fs);
	free(ds);
	free(fs);
	return (str);
}

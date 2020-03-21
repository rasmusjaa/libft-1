/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 16:16:58 by wkorande          #+#    #+#             */
/*   Updated: 2020/03/20 14:29:59 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include <stdlib.h>

typedef struct	s_queue
{
	size_t		size;
	size_t		item_size;
	void		**items;
	int			front;
	int			rear;
}				t_queue;

t_queue			*ft_queue_create(size_t size, size_t item_size);
void			ft_queue_destroy(t_queue *q);
int				ft_queue_isempty(t_queue *q);
void			ft_queue_enqueue(t_queue *q, void *item);
void			*ft_queue_dequeue(t_queue *q);
void			ft_queue_print(t_queue *q);

#endif
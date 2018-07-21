/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:48:44 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/07/10 01:07:45 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"

# define BUFF_SIZE 100000

typedef struct	s_get
{
	char		*buffer;
	char		*temp;
	int			ret;
	int			i;
	char		n_line;
}				t_get;

int				get_next_line(const int fd, char **line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:10:08 by adveres           #+#    #+#             */
/*   Updated: 2018/01/07 11:37:51 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE 42

typedef	struct		s_stack_el
{
	char			*str;
	int				fd;
}					t_stack_el;

int					get_next_line(int const fd, char **line);

#endif

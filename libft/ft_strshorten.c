/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strshorten.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 14:11:25 by gpop              #+#    #+#             */
/*   Updated: 2017/12/29 03:12:33 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strshorten(char **s, int start, int len)
{
	char	*newstr;
	int		len_s;

	len_s = (int)ft_strlen(*s);
	if (!s || !(*s) || start >= len_s)
		return (NULL);
	if (start + len > len_s)
		len = len_s - start;
	if (!(newstr = ft_strsub(*s, start, len)))
		return (NULL);
	ft_strdel(s);
	*s = newstr;
	return (*s);
}

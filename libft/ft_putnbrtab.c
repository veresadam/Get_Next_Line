/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 21:57:31 by gpop              #+#    #+#             */
/*   Updated: 2017/12/06 22:12:50 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrtab(int *tab, size_t len)
{
	size_t	i;

	if (tab != NULL)
	{
		i = 0;
		while (i < len)
		{
			ft_putnbr(tab[i++]);
			if (i < len)
				ft_putchar(' ');
		}
	}
}

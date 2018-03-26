/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 21:43:04 by gpop              #+#    #+#             */
/*   Updated: 2017/12/06 21:44:36 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int nb)
{
	int c;

	if (nb == 0)
		return (1);
	c = 0;
	while (nb != 0)
	{
		nb /= 10;
		c++;
	}
	return (c);
}
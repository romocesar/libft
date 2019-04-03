/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 22:12:23 by cromo             #+#    #+#             */
/*   Updated: 2019/03/25 23:10:59 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *cpyd;
	const unsigned char *cpys;
	size_t i;

	i = 0;
	cpyd = dst;
	cpys = src;
	if (cpys < cpyd)
		while (len-- > 0)
			cpyd[len] = cpys[len];
	else
	{
		while (i < len)
		{
			cpyd[i] = cpys[i];
			i++;
		}
	}
	return (dst);
}

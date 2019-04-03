/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:11:49 by cromo             #+#    #+#             */
/*   Updated: 2019/03/27 16:56:01 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *cpyd;
	unsigned char *cpys;
	
	i = 0;
	cpyd = (unsigned char *)dst;
	cpys = (unsigned char *)src;
	while (i < n)
	{
		cpyd[i] = cpys[i];
		i++;
	}
	return (dst);
}

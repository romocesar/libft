/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 16:59:24 by cromo             #+#    #+#             */
/*   Updated: 2019/03/13 21:36:27 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*cpys;
	unsigned char	*cpyd;
	size_t			i;

	i = 0;
	ch = (unsigned char)c;
	cpyd = (unsigned char *)dst;
	cpys= (unsigned char *)src;
	while (i < n)
	{
		cpyd[i] = cpys[i];
		if (cpys[i] == ch)
			return (&cpys[i + 1]);
		i++;
	}
	return (NULL);
}

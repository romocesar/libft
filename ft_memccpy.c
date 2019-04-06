/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 16:59:24 by cromo             #+#    #+#             */
/*   Updated: 2019/04/06 15:39:07 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *   Copies bytes from string src to string dst.  If the character c
 *   (as converted to an unsigned char) occurs in the string src, the copy
 *   stops and a pointer to the byte after the copy of c in thev string dst is
 *    returned.  Otherwise, n bytes are copied, and a NULL pointer is returned
 */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cpys;
	unsigned char	*cpyd;
	size_t			i;
	
	i = 0;
	cpyd = (unsigned char *)dst;
	cpys= (unsigned char *)src;
	while (i < n)
	{
		if ((cpyd[i] = cpys[i]) == (unsigned char)c)
			return (&cpyd[i + 1]);
		i++;
	}
	return (NULL);
}

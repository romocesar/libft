/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 00:15:50 by cromo             #+#    #+#             */
/*   Updated: 2019/03/27 01:25:38 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *cpys;
	
	i = 0;
	cpys = (const unsigned char*)s;
	while (i < n)
	{
		if(cpys[i] == (unsigned char)c)
			return((void*)&cpys[i]);
		++i;
	}	
	return(NULL);
}

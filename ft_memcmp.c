/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 01:28:12 by cromo             #+#    #+#             */
/*   Updated: 2019/03/27 16:30:56 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *cpys1;
	const unsigned char *cpys2;
	
	cpys1 = (const unsigned char *)s1;
	cpys2 = (const unsigned char *)s2;
	i = 0;
	while ((i < n) && cpys1[i] == cpys2[i])
		i++;
	if (i != n)
		return (cpys1[i] - cpys2[i]);
	return (0);
}

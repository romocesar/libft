/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:26:40 by cromo             #+#    #+#             */
/*   Updated: 2019/04/02 20:32:07 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  Writes len bytes of value c (converted to an unsigned char) to the string b
 */

void	*ft_memset(void *ptr, int ch, size_t len)
{
	int i;
	unsigned char *b;

	i = 0;
	b = (unsigned char*)ptr;
	while (i < (int)len)
		b[i++] = (unsigned char)ch;
	return (ptr);
}

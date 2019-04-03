/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:01:59 by cromo             #+#    #+#             */
/*   Updated: 2019/03/29 15:45:33 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i] != 0 && dst[i] != 0)
	{
		dst[i] = src[i];
		++i;
	}
	while (i < len)
		dst[i++] = 0;
	return (dst);
}

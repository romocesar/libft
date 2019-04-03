/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:15:29 by cromo             #+#    #+#             */
/*   Updated: 2019/04/02 16:16:03 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Definition and return value*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	i = 0;
	len = 0;
	while(dst[len] && len < dstsize)
		++len;
	i = len;
	while(src[len - i] && (len + 1) < dstsize)
	{
		dst[len] = src[len - i];
		++len;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}

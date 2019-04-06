/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:00:46 by cromo             #+#    #+#             */
/*   Updated: 2019/04/03 02:47:36 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *    Locates a substring in a string. If needle is an empty string, haystack
 *    is returned; if needle occurs nowhere in haystack, NULL is returned;
 *    otherwise a pointer to the first character of the first occurrence of
 *    needle is returned.
 */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && (needle[j]))
			++j;
		if (!(needle[j]))
				return ((char *)&haystack[i]);
		j = 0;
		++i;
	}	
	return (NULL);
}

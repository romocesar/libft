/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 02:35:24 by cromo             #+#    #+#             */
/*   Updated: 2019/04/03 03:01:18 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 	 Locates the first occurrence of the null-terminated string needle in the
 * 	 string haystack, where not more than len characters are searched. 
 * 	 Characters that appear after a `\0' character are not searched.  If needle
 * 	 is an empty string, haystack is returned; if needle occurs nowhere in
 * 	 haystack, NULL is returned; otherwise a pointer to the first character
 * 	 of the first occurrence of needle is returned
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && (i < len))
	{
		while (haystack[i + j] == needle[j] && (needle[j]) && ((i + j) < len))
			++j;
		if (!(needle[j]))
				return ((char *)&haystack[i]);
		j = 0;
		++i;
	}	
	return (NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:00:46 by cromo             #+#    #+#             */
/*   Updated: 2019/04/02 22:34:59 by cromo            ###   ########.fr       */
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
	char *loc;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	j = 0;
	loc = needle;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0')
			{
				++j;
				if (haystack[i + j] != needle[j])
					break;
				else if (needle[j] 
			}
		}
		++i;
	}	
	return (NULL);
}

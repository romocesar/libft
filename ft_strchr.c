/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:43:11 by cromo             #+#    #+#             */
/*   Updated: 2019/04/02 16:26:54 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first occurrence of char value c in the string s and return a 
 * pointer to its location. Includes NULL terminator. Returns NULL if c
 * not found.
 */

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while(s[i] != 0)
	{
		if(s[i] == (char)c)
			return((char *)&s[i]);
		++i;
	}
	if(s[i] == (char)c)
		return((char *)&s[i]);
	return (NULL);
}

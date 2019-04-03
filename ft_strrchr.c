/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:24:07 by cromo             #+#    #+#             */
/*   Updated: 2019/04/02 20:24:58 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the last occurrence of char value c in the string s and return a 
 * pointer to its location. Includes NULL terminator. Returns NULL if c
 * not found.
 */


char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s);
	while(i >= 0)
	{
		if(s[i] == (char)c)
			return ((char *)&s[i]);
		--i;
	}	
	return (NULL);
}



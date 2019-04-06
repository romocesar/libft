/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 03:02:35 by cromo             #+#    #+#             */
/*   Updated: 2019/04/03 03:46:10 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 	Lexicographically compare the null-terminated strings s1 and s2.
 * 	Returns an integer greater than, equal to, or less than 0, according as
 * 	the string s1 is greater than, equal to, or less than the string s2
 */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

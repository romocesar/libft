/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:10:06 by cromo             #+#    #+#             */
/*   Updated: 2019/03/27 21:03:53 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;
	size_t i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(copy = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while(s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

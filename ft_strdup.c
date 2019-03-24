/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:10:06 by cromo             #+#    #+#             */
/*   Updated: 2019/02/27 18:04:23 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *copy;
	unsigned int i;
	unsigned int len;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(copy = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	len = i;
	i = 0;
	while(len--)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

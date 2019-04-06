/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 06:27:04 by cromo             #+#    #+#             */
/*   Updated: 2019/04/06 06:30:14 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if(!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = 0;
	while (size--)
		str[size] = 0;
	return (str);
}


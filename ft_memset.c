/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:26:40 by cromo             #+#    #+#             */
/*   Updated: 2019/03/23 15:44:32 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *ptr, int ch, size_t len)
{
	int i;
	char *b;

	i = 0;
	b = ptr;
	while(i < (int)len)
	{
		if(b[i] == '\0')
			break;
		b[i++] = (unsigned char)ch;
	}
	return(ptr);
}

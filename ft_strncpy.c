/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:01:59 by cromo             #+#    #+#             */
/*   Updated: 2019/03/07 20:58:43 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	if (i < len && src[i] != '\0')
	{
		while (dst[i] != '\0')
		{
			dst[i++] = '\0';
		}	
	//Assuming code allocates extra memory into heap for dst
	}
	return (dst);
}

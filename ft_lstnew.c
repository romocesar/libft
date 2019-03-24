/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 21:42:45 by cromo             #+#    #+#             */
/*   Updated: 2019/03/12 20:00:50 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_element;
	
	if (!(new_element = (t_list*)malloc(sizeof(t_list) * content_size))
		return (NULL);
	if (content == NULL && content_size == 0))
	{	
		new_element.content = NULL;
		new_element.content_size = 0;
	}
	else
	{
		if(!(new_element.content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(new_element.content, content, content_size);
	}
	new_element.next = NULL;
	return (new_element);
}

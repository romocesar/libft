/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 23:50:50 by cromo             #+#    #+#             */
/*   Updated: 2019/04/03 03:55:47 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *s)
{
	unsigned int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r'
			|| s[i] == '\v' || s[i] == '\f')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i++] - '0');
	}
	return (result * sign);
}

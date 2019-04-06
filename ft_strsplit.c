/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 06:57:11 by cromo             #+#    #+#             */
/*   Updated: 2019/04/06 14:59:45 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*allocate_word(char const *s, char c, char **words, int num)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = 0;
	while (*s == c)
		s++;
	while (s[c1] != c && s[c1] != '\0')
		c1++;
	words[num] = (char*)malloc(sizeof(char) * c1);
	if (words[num])
	{
		while (*s != c && *s != '\0')
		{
			words[num][c2++] = *s;
			s++;
		}
		words[num][c2] = '\0';
		return ((char *)s);
	}
	return (NULL);
}

static	int		get_number_words(char const *s, char c)
{
	int wordc;
	int flag;

	wordc = 0;
	flag = 0;
	while (*s != '\0')
	{
		while (*s == c)
		{
			if (flag)
			{
				wordc++;
				flag = 0;
			}
			s++;
		}
		if (*s != '\0')
			flag = 1;
		else
			return (wordc);
		s++;
	}
	if (flag)
		wordc++;
	return (wordc);
}

char			**ft_strsplit(char const *s, char c)
{
	int		c1;
	char	**words;
	int		num;
	int		offset;

	if (s && c)
	{
		c1 = 0;
		offset = 0;
		num = get_number_words(s, c);
		words = (char**)malloc((num + 1) * sizeof(char*));
		if (words)
		{
			while (c1 < num)
			{
				s = allocate_word(s, c, words, c1);
				c1++;
			}
			words[c1] = (char*)malloc(sizeof(char));
			words[c1] = NULL;
			return (words);
		}
	}
	return (NULL);
}

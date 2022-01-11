/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <oabdelfa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:26:53 by oabdelfa          #+#    #+#             */
/*   Updated: 2022/01/11 11:05:04 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcnt(char *str, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	if (str[0] != c)
		word_count++;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

static char	**ft_split(char **dest, char *str, char c)
{
	int		i;
	int		word;
	size_t	len;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			len = ft_strlenc(&str[i], c);
			dest[word] = (char *)malloc(sizeof(char) * (len + 1));
			if (!dest[word])
				return (ft_free_array((void **)dest, (size_t)word));
			ft_strncpy(dest[word], &str[i], len);
			dest[word][len] = '\0';
			word++;
			i += len;
		}
	}
	dest[word] = 0;
	return (dest);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dest;
	char	*str;
	int		word_count;

	str = (char *)s;
	dest = NULL;
	if (s)
	{
		word_count = wordcnt(str, c);
		dest = (char **)malloc(sizeof(char *) * (word_count + 1));
		if (!dest)
			return (NULL);
		ft_split(dest, str, c);
	}
	return (dest);
}

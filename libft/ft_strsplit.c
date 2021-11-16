/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:26:53 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/11 18:37:55 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (ft_isalnum(s[i]))
		{
			res += 1;
			while (s[i] != c)
				i++;
		}
		i++;
	}
	return (res);
}

static int	ft_len(char const *s, int i, char c)
{
	int	res;

	res = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		res++;
	}
	return (res);
}

static char	**ft_assignwords(char	**res, char const *s, char c)
{
	int		a;
	int		b;
	int		i;
	int		len;

	a = 0;
	b = 0;
	i = 0;
	len = 0;
	while (s[a])
	{
		if (ft_isalnum(s[a]))
		{
			len = ft_len(s, a, c);
			res[b] = (char *) malloc(sizeof(char) * len + 1);
			while (s[a] != c && s[a])
				res[b][i++] = s[a++];
			res[b][i] = '\0';
			b++;
		}
		i = 0;
		a++;
	}
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	int		wrdcnt;
	char	**res;

	if (!s)
		return (NULL);
	wrdcnt = ft_wordcount(s, c);
	res = (char **) malloc(sizeof(char *) * wrdcnt + 1);
	if (!res)
		return (NULL);
	res = ft_assignwords(res, s, c);
	res[wrdcnt] = 0;
	return (res);
}

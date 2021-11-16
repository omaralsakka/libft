/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:35:08 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/15 16:48:46 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s)
{
	size_t	len;

	len = ft_strlen(s) - 1;
	while (ft_isspace(s[len]))
		len--;
	len += 1;
	return (len);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	int		n;
	char	*res;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	len = ft_wordlen(s);
	while (ft_isspace(s[i]))
		i++;
	res = (char *) malloc(sizeof(char) * (len - i) + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		if (ft_isspace(s[i]) && ft_isspace(s[i + 1]))
			i++;
		else
			res[n++] = s[i++];
	}
	res[n] = '\0';
	return (res);
}

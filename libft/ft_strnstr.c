/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:21 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/17 13:44:53 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_find_n(char *pnt, const char *n, size_t len, size_t i)
{
	int	pos;
	int	j;

	while (pnt[i] != '\0' && i < len)
	{
		j = 0;
		if (pnt[i] == n[j])
		{
			pos = i;
			while ((pnt[i] == n[j] && i < len) || n[j] == '\0')
			{
				if (n[j] == '\0')
					return (&pnt[pos]);
				i++;
				j++;
			}
			i = pos;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(char const *haystack, const char *needle, size_t len)
{
	char	*pnt;
	size_t	i;

	i = 0;
	pnt = (char *)haystack;
	if (needle[i] == '\0')
		return (pnt);
	return (ft_find_n(pnt, needle, len, i));
}

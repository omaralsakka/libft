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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == needle[0])
		{
			while (needle[i] && needle[i] == *haystack && len > 0)
			{
				haystack++;
				i++;
				len--;
			}
		}
		if (i == ft_strlen(needle))
			return ((char *)haystack - ft_strlen(needle));
		i = 0;
		if (*haystack++ == '\0')
			return (NULL);
		len--;
	}
	return (NULL);
}

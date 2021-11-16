/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:57:48 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/11 18:57:21 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	size;

	size = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

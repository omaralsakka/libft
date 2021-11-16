/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:21 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/15 12:03:06 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		size;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (*haystack && len)
	{
		if (ft_strncmp(haystack, needle, size) == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return 0;
}
*/

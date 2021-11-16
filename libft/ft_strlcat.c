/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:19:52 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/15 18:56:04 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(dst);
	if (n < i)
	{
		j = ft_strlen(src);
		return (n + j);
	}
	while (n && i < n - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j])
	{
		j++;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:56:09 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/18 11:48:55 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dest && !src && n > 0)
		return (dest);
	s = src;
	d = dest;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

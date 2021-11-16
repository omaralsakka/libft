/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:59:51 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/12 16:28:36 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;
	unsigned char		stop;

	stop = c;
	i = 0;
	s = src;
	d = dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == stop)
			return ((void *) &d[i + 1]);
		i++;
	}
	return (NULL);
}

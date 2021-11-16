/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:26:15 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/15 10:06:49 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*let;

	let = s;
	while (n)
	{
		if (*let == (unsigned char)c)
			return ((void *)let);
		let++;
		n--;
	}
	return (NULL);
}

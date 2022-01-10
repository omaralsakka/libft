/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:47:39 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/21 15:22:18 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				len;
	const unsigned char	*ft;
	const unsigned char	*nd;

	ft = s1;
	nd = s2;
	len = 0;
	while (len < n)
	{
		if (ft[len] != nd[len])
			return (ft[len] - nd[len]);
		len++;
	}
	return (0);
}

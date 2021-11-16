/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:43:37 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/11 16:54:06 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = (ft_strlen(s) + 1);
	while (*s)
		s++;
	while (len > i)
	{
		if (*s == c)
			return ((char *) s);
		len--;
		s--;
	}
	return (NULL);
}

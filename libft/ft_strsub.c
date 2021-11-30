/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarfido <omarfido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:30:13 by omarfido          #+#    #+#             */
/*   Updated: 2021/11/23 12:03:00 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

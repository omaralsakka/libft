/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarfido <omarfido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:30:13 by omarfido          #+#    #+#             */
/*   Updated: 2021/11/18 12:53:34 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *) malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	while (len)
	{
		res[i] = s[start];
		i++;
		start++;
		len--;
	}
	res[i] = '\0';
	return (res);
}

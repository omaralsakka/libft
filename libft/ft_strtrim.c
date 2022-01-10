/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:35:08 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/23 13:59:18 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	ft_wordlen(char const *s)
{
	size_t	len;

	len = ft_strlen(s) - 1;
	while (ft_wspace(s[len]) && len > 0)
		len--;
	if (len == 0)
		len = 1;
	return (len);
}

static int	ft_lencheck(int e, int s)
{
	int	len;

	len = e - s + 1;
	if (len < 0)
		len = 0;
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		len;
	int		i;
	int		start;
	int		end;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_wordlen(s);
	while (ft_wspace(s[start]))
		start++;
	len = ft_lencheck(end, start);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

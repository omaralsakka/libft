/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:50:38 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/30 12:25:22 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkmax(int param)
{
	if (param == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				i;
	int				param;

	param = 1;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		param = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		if (res > 9223372036854775807)
			return (ft_checkmax(param));
		i++;
	}
	return ((int)res * param);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:28:06 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/19 14:28:46 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_array(void **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_free(array[i], ft_strlen(array[i]));
		i++;
	}
	free(array);
	array = NULL;
	return (NULL);
}

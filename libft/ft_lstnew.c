/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:56:05 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/17 15:51:00 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	if (content)
	{
		res->content = (void *)malloc(content_size);
		if (!res->content)
		{
			free(res);
			return (NULL);
		}
		ft_memcpy(res->content, content, content_size);
	}
	else
	{
		res->content = NULL;
		content_size = 0;
	}
	res->content_size = content_size;
	res->next = NULL;
	return (res);
}

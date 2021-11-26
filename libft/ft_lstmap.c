/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:49:17 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/17 15:52:43 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = (*f)(lst);
	if (!temp)
		return (NULL);
	temp->next = ft_lstmap(lst->next, f);
	return (temp);
}

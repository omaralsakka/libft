/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:47:04 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/11/19 15:35:42 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*head;
	t_list	*temp;

	if (!alst || !del)
		return ;
	head = *alst;
	while (head)
	{
		temp = head->next;
		ft_lstdelone(&head, del);
		head = temp;
	}
	*alst = NULL;
}

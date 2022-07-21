/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:23:48 by seokang           #+#    #+#             */
/*   Updated: 2022/07/21 16:45:13 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new;
	int		i;

	new = 0;
	i = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new[i]->content = f(lst->content);
		new[i]->next = new[i + 1];
		lst = lst->next;
		i++;
	}
	return (*new);
}

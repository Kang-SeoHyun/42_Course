/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:49:28 by seokang           #+#    #+#             */
/*   Updated: 2022/07/14 17:38:34 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (src == dst)
		return (dst);
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (i++ < len)
			d[i] = s[i];
	}
	else
	{
		while (i < len--)
			d[len] = s[len];
	}
	return (dst);
}
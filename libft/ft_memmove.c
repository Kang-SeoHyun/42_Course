/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:49:28 by seokang           #+#    #+#             */
/*   Updated: 2022/07/13 19:46:06 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//뭐가 큰지 생각해서 코딩하기!
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = len;
	if (!src && !dst)
		return (0);
	if (dst == src)
		return (dst);
	while (len > 0)
	{
		d[len] = s[len];
		len--;
	}
	return (dst);
}
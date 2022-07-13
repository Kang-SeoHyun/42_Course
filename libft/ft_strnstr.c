/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:26:44 by seokang           #+#    #+#             */
/*   Updated: 2022/07/13 12:26:46 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_len;
	size_t	nee_len;
	size_t	i;

	hay_len = ft_strlen(haystack);
	nee_len = ft_strlen(needle);
	i = len;

	if (*needle == '\0')
		return ((char *)haystack);
	if (hay_len < nee_len || len < nee_len)
		return (0);
	if (i > hay_len)
		i = hay_len;
	while (i >= nee_len)
	{
		if (ft_memcmp(haystack, needle, nee_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
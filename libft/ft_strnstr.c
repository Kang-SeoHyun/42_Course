/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:26:44 by seokang           #+#    #+#             */
/*   Updated: 2022/07/13 16:42:59 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_len;
	size_t	nee_len;

	hay_len = ft_strlen(haystack);
	nee_len = ft_strlen(needle);
	if (len > hay_len)
		len = hay_len;
	if (*needle == '\0')
		return ((char *)haystack);
	if (hay_len < nee_len || len < nee_len)
		return (0);
	while (len >= nee_len)
	{
		if (ft_strncmp((char *)haystack, (char *)needle, nee_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*h = "alalalaaaalaa djf jkln  dsf";
	char	*n = "dj";

	printf("return = %s", ft_strnstr(h,n,20));
	//printf("return = %s", strnstr(h,n,20));
}
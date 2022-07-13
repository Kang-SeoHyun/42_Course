/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:57 by seokang           #+#    #+#             */
/*   Updated: 2022/07/13 16:39:18 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (!s1[i] && !s2[i])
			return (0);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[10] = "kajfaagjjkl";
//     char s2[10] = "aab";
//     int compare1 = strncmp(s1, s2, 2);
//     int compare2 = ft_strncmp(s1, s2, 2);
// 	printf("원 함수결과 : %d\n",compare1); 
// 	printf("ft 함수결과 : %d\n",compare2);
//     return (0);
// }
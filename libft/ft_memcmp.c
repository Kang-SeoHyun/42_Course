/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:25:55 by seokang           #+#    #+#             */
/*   Updated: 2022/07/14 16:27:29 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
#define MAX_NAMELEN 20

typedef struct 
{
	char	name[MAX_NAMELEN];
	int		age;
}Member;

int	main(void)
{
	Member	m1={NULL,NULL};
	Member	m2={"강감찬",27};
	Member	m3={NULL,NULL};

	if (ft_memcmp(&m1,&m2,sizeof(Member)) == 0)
	{
		printf("m1과 m2는 서로 같습니다.\n");
	}
	else
	{
		printf("m1과 m2는 서로 다릅니다.\n");
	}
	if (ft_memcmp(&m1,&m3,sizeof(Member)) == 0) 
	{
		printf("m1과 m3는 서로 같습니다.\n");
	}
	else
	{
		printf("m1과 m3는 서로 다릅니다.\n");
	}
	return (0);
}
*/
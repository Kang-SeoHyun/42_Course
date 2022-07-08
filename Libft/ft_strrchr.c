/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:09:40 by seokang           #+#    #+#             */
/*   Updated: 2022/07/08 18:29:07 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int			i;
	const char	*here;


	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			here = &s[i];
		i++;
	}
	return (here);
}

#include <stdio.h>

int main()
{
    char s1[30] = "A Garden Diary";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = ft_strrchr(s1, 'a');     // 'a'로 시작하는 문자열 검색, 포인터 반환

        printf("%s\n", ptr);         // 검색된 문자열 

    return 0;
}
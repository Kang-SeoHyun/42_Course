/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:00 by seokang           #+#    #+#             */
/*   Updated: 2022/07/11 13:55:06 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
    char s1[30] = "A Garden Diary";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = ft_strchr(s1, 'a');     // 'a'로 시작하는 문자열 검색, 포인터 반환

        printf("%s\n", ptr);         // 검색된 문자열 출력
          // 포인터에 1을 더하여 a 다음부터 검색
    

    return 0;
}
*/
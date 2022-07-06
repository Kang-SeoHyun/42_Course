/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:38:52 by seokang           #+#    #+#             */
/*   Updated: 2022/07/06 12:41:21 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    else if ('a' <= c && c <= 'z')
        return (1);
    else
        return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("is alpha : %d",ft_isalpha('d'));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:23:03 by seokang           #+#    #+#             */
/*   Updated: 2022/07/08 16:54:56 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

#include <stdio.h>
int main(void)
{
    const char* name = "Block\0DMask";
    printf("1. const char* name = \"BlockDMask\"");
    printf("\tlen : %d\n", (int)strlen(name));
}

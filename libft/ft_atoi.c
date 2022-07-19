/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokang <seokang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:46:38 by seokang           #+#    #+#             */
/*   Updated: 2022/07/19 19:59:27 by seokang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_blank(char a)
{
	if ((9 <= a && a <= 13) || a == 32)
		return (1);
	else
		return (0);
}

int	ft_is_sign(char a, int *sign)
{
	if (a == '+')
		return (1);
	else if (a == '-')
	{
		*sign = -1;
		return (1);
	}
	else
		return (0);
}

int	ft_is_num(char a)
{
	if ('0' <= a && a <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ft_is_blank(str[i]))
		i++;
	if (str[i] && ft_is_sign(str[i], &sign))
		i++;
	while (str[i] && ft_is_num(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	if (result > 2147483647)
		return (-1);
	else if (result < -2147483648)
		return (0);
	return (result);
}

/*
#include <stdio.h>

void	main(void)
{
	long long		num1;
	long long		num2;
	char			*str;

	str = "2222222222222222";
	num1 = atoi(str);
	num2 = ft_atoi(str);

	printf("1: %d, 2: %d \n", num1, num2);

	str = "-222222222222222222222222222222222222222222";
	num1 = atoi(str);
	num2 = ft_atoi(str);

	printf("1: %d, 2: %d ", num1, num2);
}
*/
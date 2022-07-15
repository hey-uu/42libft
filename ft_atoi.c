/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:43:12 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 11:03:13 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_isspace(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_numcmp(long long a, long long b)
{
	if (a > b)
		return (1);
	else if (a == b)
		return (0);
	else
		return (-1);
}

static long long	ft_strtoll(int sign, const char *str)
{
	long long	num;
	int			i;
	int			check;

	i = -1;
	num = 0;
	while (ft_isdigit(str[++i]) == 1)
	{
		if (i == 18)
		{
			check = ft_numcmp(num, 922337203685477580);
			if (sign == 1 && (check > 0 || (check == 0 && str[i] >= '7') \
				|| (str[i + 1] && ft_isdigit(str[i + 1]))))
				return (SIZE_MAX);
			else if (sign == -1 && (check > 0 || (check == 0 && str[i] >= '8') \
				|| (str[i + 1] && ft_isdigit(str[i + 1]))))
				return (SIZE_MAX + 1);
		}
		num = num * 10 + str[i] - '0';
	}
	return (num * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return ((int) ft_strtoll(sign, str));
}
/*
#include <stdio.h> 
int main(void)
{
	printf("mine:\n");
	printf("%d\n", ft_atoi("9223372036854775805123"));
	printf("%d\n", ft_atoi("-1020938490283904810931"));
	printf("%d\n", ft_atoi("9223372036854775806"));
	printf("%d\n", ft_atoi("9223372036854775807"));
	printf("%d\n", ft_atoi("9223372036854775808"));
	printf("%d\n", ft_atoi("9223372036854775809"));
	printf("%d\n", ft_atoi("-9223372036854775808"));
	printf("%d\n", ft_atoi("-9223372036854775811"));
	printf("\nanswer:\n");
	printf("%d\n", atoi("9223372036854775805123"));
	printf("%d\n", atoi("-1020938490283904810931"));
	printf("%d\n", atoi("9223372036854775806"));
	printf("%d\n", atoi("9223372036854775807"));
	printf("%d\n", atoi("9223372036854775808"));
	printf("%d\n", atoi("9223372036854775809"));
	printf("%d\n", atoi("-9223372036854775808"));
	printf("%d\n", atoi("-9223372036854775811"));
}
*/
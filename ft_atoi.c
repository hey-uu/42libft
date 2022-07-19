/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:43:12 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/19 15:05:02 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static long	ft_strtol(int sign, const char *str)
{
	long	num;
	int		i;
	long	check;

	i = -1;
	num = 0;
	while (ft_isdigit(str[++i]) == 1)
	{
		if (i == 18)
		{
			check = num - 922337203685477580;
			if (sign == 1 && (check > 0 || (check == 0 && str[i] >= '7') \
				|| ft_isdigit(str[i + 1])))
				return (FT_LONG_MAX);
			else if (sign == -1 && (check > 0 || (check == 0 && str[i] >= '8') \
				|| ft_isdigit(str[i + 1])))
				return (-FT_LONG_MAX - 1);
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
	return ((int) ft_strtol(sign, str));
}

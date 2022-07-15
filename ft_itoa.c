/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:49:50 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 17:43:40 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	const int	len = ft_getlen(n);
	int			i;
	char		*res;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = (int) len;
	if (n == 0)
		res[0] = '0';
	else if (n < 0)
		res[0] = '-';
	while (n != 0)
	{
		res[--i] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	res[len] = '\0';
	return (res);
}

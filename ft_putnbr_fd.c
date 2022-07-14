/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:58:34 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/14 22:18:56 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[11];
	long	tem;
	int		i;

	tem = (long) n;
	if (tem == 0)
		write(fd, "0", sizeof(char));
	if (tem < 0)
	{
		tem *= -1;
		write(fd, "-", sizeof(char));
	}
	i = 0;
	while (tem > 0)
	{
		arr[i++] = tem % 10 + '0';
		tem /= 10;
	}
	while (--i >= 0)
		write(fd, &arr[i], sizeof(char));
}

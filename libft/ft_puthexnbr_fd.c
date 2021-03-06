/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-der <dvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:55:14 by dvan-der          #+#    #+#             */
/*   Updated: 2022/01/18 14:34:26 by dvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexnbr_fd(int n, int fd)
{
	long long	x;

	x = (long long)n;
	if (x < 10)
	{
		if (x < 10)
			ft_putchar_fd(x + 48, fd);
		else if (x < 16)
			ft_putchar_fd(x + 87, fd);
	}
	else
	{
		ft_puthexnbr_fd(x / 16, fd);
		ft_puthexnbr_fd(x % 16, fd);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilin <tmilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:05:03 by tmilin            #+#    #+#             */
/*   Updated: 2024/09/25 22:25:24 by tmilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_put_d_i(nb / 10);
		count += ft_put_d_i(nb % 10);
	}
	else if (nb && nb < 10)
		count += ft_put_c(nb + '0');
	if (count < 0)
		return (-1);
	return (count);
}

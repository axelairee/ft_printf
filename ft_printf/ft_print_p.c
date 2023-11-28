/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:44:05 by abolea            #+#    #+#             */
/*   Updated: 2023/11/27 19:03:21 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_print_p(unsigned long args)
{
	char	*base;

	base = "0123456789abcdef";
	if (!args)
	{
		if (ft_putstr_fd("(nil)", 1) < 0)
			return (-1);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_putnbr_base(args, base, 1) + 2);
}

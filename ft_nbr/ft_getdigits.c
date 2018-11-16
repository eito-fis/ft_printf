/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eito-fis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:41:28 by eito-fis          #+#    #+#             */
/*   Updated: 2018/10/31 21:08:39 by eito-fis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

size_t	ft_getdigits(intmax_t n, int base)
{
	size_t	l;

	l = 1;
	while ((n /= base) != 0)
		l++;
	return (l);
}

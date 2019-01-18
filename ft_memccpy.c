/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 20:15:48 by ggerhold          #+#    #+#             */
/*   Updated: 2018/12/23 21:37:22 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	size_t				i;

	dp = (unsigned char*)dst;
	sp = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dp[i] = sp[i];
		if (dp[i] == (unsigned char)c)
			return (dp + i + 1);
		i++;
	}
	return (NULL);
}

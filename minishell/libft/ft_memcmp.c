/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:07:22 by smbonan           #+#    #+#             */
/*   Updated: 2018/05/31 17:16:29 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	d = (const unsigned char*)s1;
	s = (const unsigned char*)s2;
	while (n--)
	{
		if (*d != *s)
			return (*d - *s);
		if (n)
		{
			d++;
			s++;
		}
	}
	return (0);
}

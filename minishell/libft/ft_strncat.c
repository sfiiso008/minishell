/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 15:53:49 by smbonan           #+#    #+#             */
/*   Updated: 2018/06/05 10:59:55 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		c;

	i = 0;
	c = 0;
	while (s1[c])
	{
		c++;
	}
	while (s2[i] && i < n)
	{
		s1[c] = s2[i];
		c++;
		i++;
	}
	s1[c] = '\0';
	return (s1);
}

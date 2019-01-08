/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:36:14 by smbonan           #+#    #+#             */
/*   Updated: 2018/06/05 08:45:52 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		ft_bzero((void*)str, size);
		i++;
	}
	return (str);
}

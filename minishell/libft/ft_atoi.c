/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:59:08 by smbonan           #+#    #+#             */
/*   Updated: 2018/06/08 11:19:10 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int is_neg;
	int nbr;

	i = 0;
	is_neg = 1;
	nbr = 0;
	while (str[i] == '\t' || str[i] == ' '
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		is_neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr *= 10;
		nbr += ((int)(str[i]) - '0');
		i++;
	}
	return (nbr * is_neg);
}

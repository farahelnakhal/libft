/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/20 19:28:25 by fqussay          #+#    #+#              */
/*   Updated: 2026/11/20 19:47:54 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	k;
	int	l;

	i = 0;
	l = 0;
	k = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		++i;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			k = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		l = (l * 10) + (nptr[i] - '0');
		i++;
	}
	return (l * k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:43:22 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/13 11:27:52 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_uzunluk(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*hed;
	int		a;

	a = 0;
	while (src[a])
		a++;
	hed = (char *)malloc(sizeof(src) * (a + 1));
	a = 0;
	if (hed == NULL)
		return (NULL);
	else
	{
		while (src[a])
		{
			hed[a] = src[a];
			a++;
		}
		hed[a] = '\0';
		return (hed);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			b;

	a = malloc(sizeof(t_stock_str) * (ac + 1));
	if (a == NULL)
		return (NULL);
	b = 0;
	while (b < ac)
	{
		a[b].str = av[b];
		a[b].copy = ft_strdup(av[b]);
		a[b].size = ft_uzunluk(av[b]);
		b++;
	}
	a[b].str = 0;
	return (a);
}

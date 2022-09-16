/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:45:04 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 17:23:54 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_uzunluk(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_kopya(char *hed, char *kay)
{
	int	a;

	a = 0;
	while (kay[a])
	{
		*hed = kay[a];
		a++;
		hed++;
	}
	return (hed);
}

int	ft_duzunluk(int size, char **strs, int sep)
{
	int	a;
	int	b;

	a = -1;
	b = sep * -1;
	while (++a < size)
		b += sep + ft_uzunluk(strs[a]);
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	char	*c;

	if (size == 0)
	{
		c = (char *)malloc(1);
		return (c);
	}
	b = ft_duzunluk(size, strs, ft_uzunluk(sep));
	a = -1;
	c = ((char *)malloc(sizeof(char) * (b + 1)));
	if (c == NULL)
		return (0);
	while (++a < size)
	{
		c = ft_kopya(c, strs[a]);
		if (a + 1 < size)
			c = ft_kopya(c, sep);
	}
	*c = '\0';
	return (c - b);
}

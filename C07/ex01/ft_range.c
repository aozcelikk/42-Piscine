/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:49:57 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 11:52:50 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;

	if (min >= max)
		return (NULL);
	a = (int *)malloc(sizeof(*a) * (max - min));
	b = 0;
	while (min < max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}

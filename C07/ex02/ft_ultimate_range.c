/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:06:37 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 12:10:19 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	b;

	if (min >= max)
		return (0);
	a = (int *)malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (0);
	b = 0;
	while (min <= max - 1)
	{
		a[b] = min++;
		b++;
	}
	*range = a;
	return (b);
}

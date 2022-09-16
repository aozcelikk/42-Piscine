/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:56:10 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 11:59:45 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*tab;
	int	min;
	int	max;

	min = 0;
	max = 5;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("tozz");
}

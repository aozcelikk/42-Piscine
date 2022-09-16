/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:11:35 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 12:19:26 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	i;
	int	*tab;
	int	min;
	int	max;
	int	size;

	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:07:49 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/27 14:17:25 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_goster(int a[], int boy)
{
	for (int b = 0; b < boy; b++)
	{
		printf("Gelen = %d, Boyut = %d\n", a[b], boy);
	}
}

int	main(void)
{
	int	tab[] = {5, 12, 41, 1, -3};
	int	size;

	size = 5;
	printf("Girdi = \n");
	ft_goster(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Çıktı = \n");
	ft_goster(tab, size);
}

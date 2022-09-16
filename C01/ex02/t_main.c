/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:31:20 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 15:33:25 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 8;
	printf("A değeri = %d ,B değeri = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Yeni A değeri = %d ,Yeni B değeri = %d\n", a, b);
	return (0);
}

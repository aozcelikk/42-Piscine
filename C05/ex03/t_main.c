/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:56:50 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/05 11:35:29 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	sayi;
	int	kuvveti;

	sayi = 2;
	kuvveti = 2;
	printf("Sayı = %d , Kuvveti = %d , Sonucu = %d\n", sayi, kuvveti, ft_recursive_power(sayi, kuvveti));
}

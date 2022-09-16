/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:48:13 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/05 17:04:05 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	a;

	a = 3;
	printf("Verilen Sayı = %d , Asalsa 1 Değilse 0 = '%d'", a, ft_is_prime(a));
	return (0);
}

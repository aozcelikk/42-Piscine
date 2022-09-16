/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:04:43 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 14:35:42 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;

	a = 12;
	printf("Verilen Değer =  %d\n", a);
	ft_ft(&a);
	printf("Çıkan Değer = %d\n", a);
	return (0);
}

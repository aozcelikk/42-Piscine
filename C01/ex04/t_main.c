/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:53:17 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 18:00:49 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("Girdi A, B = %d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Bölüm = %d, Kalan = %d\n", a, b);
	return (0);
}

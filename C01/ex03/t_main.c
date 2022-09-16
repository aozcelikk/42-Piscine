/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:37:16 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 17:48:02 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 5;
	printf("ilk Çıktı A,B = %d , %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Son Çıktı A,B,Bölüm,Kalan = %d,%d,%d,%d\n", a, b, div, mod);
	return (0);
}

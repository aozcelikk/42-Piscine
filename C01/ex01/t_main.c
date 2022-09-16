/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:11:57 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 14:26:23 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*a1;
	int	**a2;
	int	***a3;
	int	****a4;
	int	*****a5;
	int	******a6;
	int	*******a7;
	int	********a8;
	int	*********a9;

	a = 12;
	a1 = &a;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;
	a5 = &a4;
	a6 = &a5;
	a7 = &a6;
	a8 = &a7;
	a9 = &a8;
	printf("ilk Gönderilen = %d\n", a);
	ft_ultimate_ft(a9);
	printf("Çıkan = %d\n", a);
	return (0);
}

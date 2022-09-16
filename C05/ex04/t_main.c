/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:39:13 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/05 12:13:11 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	sayi;

	sayi = 5;
	printf("Fibonacci sayi artışı = %d\n", ft_fibonacci(sayi));
}

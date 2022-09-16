/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:28:59 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/26 19:44:38 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	len;
	char	den[6];

	den[0] = 'M';
	den[1] = 'r';
	den[2] = 'b';
	den[3] = ' ';
	den[4] = '4';
	den[5] = '2';
	len = ft_strlen(den);
	printf("Karakter sayısı = %d\n", len);
}

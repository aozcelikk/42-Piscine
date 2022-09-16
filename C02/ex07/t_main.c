/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:35:17 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 19:39:56 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	a[] = "cashdfwif";

	printf("Girdi = %s\n", a);
	printf("Çıktı = %s\n", ft_strupcase(a));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:36:10 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 18:40:56 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	a[] = "ABASUDKLDSFL";
	char	b[] = "asdnfknkjsdf";
	char	c[] = "431241453453";
	char	d[] = "ASDInkasd+^3";

	printf("Girdi1 %s = Çıktı1 %d\n", a, ft_str_is_lowercase(a));
	printf("Girdi2 %s = Çıktı2 %d\n", b, ft_str_is_lowercase(b));
	printf("Girdi3 %s = Çıktı3 %d\n", c, ft_str_is_lowercase(c));
	printf("Girdi4 %s = Çıktı4 %d\n", d, ft_str_is_lowercase(d));
	return (0);
}

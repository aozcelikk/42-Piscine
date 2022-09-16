/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:56:16 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 19:00:59 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	a[] = "NSADFJJI";
	char	b[] = "salkdfas";
	char	c[] = "1234jı%%";
	char	d[] = "";

	printf("Girdi1 = %s, Çıktı1 %d\n", a, ft_str_is_uppercase(a));
	printf("Girdi2 = %s, Çıktı2 %d\n", b, ft_str_is_uppercase(b));
	printf("Girdi3 = %s, Çıktı3 %d\n", c, ft_str_is_uppercase(c));
	printf("Girdi4 = %s, Çıktı4 %d\n", d, ft_str_is_uppercase(d));
	return (0);
}

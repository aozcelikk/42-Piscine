/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:15:54 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 18:23:00 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "sadfMeıasdfkKASDJIFA";
	char	b[] = "12348757890";
	char	c[] = "1234jlkasdfMLKN3120";
	char	d[] = "";

	printf("Girdi1 = %s, Çıktı1 = %d\n", a, ft_str_is_numeric(a));
	printf("Girdi2 = %s, Çıktı2 = %d\n", b, ft_str_is_numeric(b));
	printf("Girdi3 = %s, Çıktı3 = %d\n", c, ft_str_is_numeric(c));
	printf("Girdi4 = %s, Çıktı4 = %d\n", d, ft_str_is_numeric(d));
	return (0);
}

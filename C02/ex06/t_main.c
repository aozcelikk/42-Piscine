/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:10:38 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 19:22:08 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	a[] = "Masdfj%^&'!!";
	char	b[] = "";
	char	c = 3;

	printf("Girdi1 = %s, Çıktı1 = %d\n", a, ft_str_is_printable(a));
	printf("Girdi2 = %s, Çıktı2 = %d\n", b, ft_str_is_printable(b));
	printf("Girdi3 = %c, Çıktı3 = %d\n", c, ft_str_is_printable(&c));
	return (0);
}

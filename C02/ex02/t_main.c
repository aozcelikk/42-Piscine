/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:19:22 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 18:29:30 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	c[] = "Merhaba";
	char	d[] = "21409_*'^";
	char	a[] = "";

	printf("Girdi1 = %s, Çıktı1 = %d\n", c, ft_str_is_alpha(c));
	printf("Girdi1 = %s, Çıktı1 = %d\n", d, ft_str_is_alpha(d));
	printf("Girdi1 = %s, Çıktı1 = %d\n", a, ft_str_is_alpha(a));
	return (0);
}

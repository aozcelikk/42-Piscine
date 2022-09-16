/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:57:27 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 19:59:50 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	a[] = "MASDFINJASNDFK";

	printf("Girdi = %s\n", a);
	printf("Çıktı = %s\n", ft_strlowcase(a));
	return (0);
}

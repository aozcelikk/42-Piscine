/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:07:10 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/30 17:01:58 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";

	printf("Girdi = %s\n", a);
	printf("Çıktı = %s\n", ft_strcapitalize(a));
	return (0);
}

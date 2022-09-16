/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:02:27 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 15:05:09 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	ilk[] = "Merhaba Hacilar";
	char	ikinci[] = "42 Deneme 42";
	unsigned int	a;

	a = 2;
	printf("Giriş\n\tsrc: %s\n\tdes: %s\n", ilk, ikinci);
	ft_strncpy(ilk, ikinci, a);
	printf("Çıkış\n\tsrc: %s\n\tdes: %s\n", ilk, ikinci);
	return (0);
}

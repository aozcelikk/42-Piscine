/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:09:14 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/28 13:42:27 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "Deneme";
	char	src[] = "42";

	printf("Giren = %s , %s\n", dest, src);
	ft_strcpy(dest, src);
	printf("Çıkan = %s , %s\n", dest, src);
	return (0);
}

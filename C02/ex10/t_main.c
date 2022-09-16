/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:17:52 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/30 13:22:21 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src,unsigned int size);

int	main(void)
{
	char	dest[] = "Haci";
	char	src[] = "Merhaba";
	unsigned int	size = 5;

	printf("Girdi = Src(%s), Dest(%s), Size(%d) \n", src, dest, size);
	size = ft_strlcpy(dest, src, size);
	printf("Çıktı = Src(%s), Dest(%s), Size(%d) \n", src, dest, size);
	return (0);
}

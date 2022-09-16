/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:08:26 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 11:30:50 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int				uzunluk;
	unsigned int	u;
	char			*yer;

	uzunluk = 0;
	while (src[uzunluk])
		uzunluk++;
	yer = (char *)malloc(sizeof(char) * uzunluk + 1);
	if (yer == NULL)
		return (NULL);
	u = 0;
	while (src[u])
	{
		yer[u] = src[u];
		u++;
	}
	yer[u] = '\0';
	return (yer);
}

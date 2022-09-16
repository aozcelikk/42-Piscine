/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:23:31 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/02 17:24:35 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	a[] = "Mehmet";
	char	b[] = "Ahmet";
	unsigned int c = 3;

	printf("%lu\n",strlcat(a,b,c));
	printf("%u\n",ft_strlcat(a,b,c));
	return (0);
}

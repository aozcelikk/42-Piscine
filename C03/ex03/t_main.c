/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:03:52 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/03 11:44:03 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	a[20] = "Dönence";
	char	b[] = "Kalmaz42";
	unsigned int c;

	c = 6;
//	printf("%s\n",strncat(a,b,c));
	printf("%s\n",ft_strncat(a,b,c));
	return (0);
}

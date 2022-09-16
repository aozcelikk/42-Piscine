/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:35:35 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/03 11:36:48 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	a[20] = "Merhaba";
	char	b[] = "123456";

//	printf("%s\n", strcat(a,b));
	printf("%s\n", ft_strcat(a,b));
	return (0);
}

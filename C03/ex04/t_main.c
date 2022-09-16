/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:29:41 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/02 15:21:12 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	a[30] = "OhayouGozaimasu Nanasan";
	char	b[30] = "masu";

	printf("%s\n",strstr(a,b));
	printf("%s\n",ft_strstr(a,b));
	return (0);
}

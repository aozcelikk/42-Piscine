/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:15:37 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/12 11:43:09 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*mine;
	char	*the;
	char	*src;

	src = "Merhaba Ey Dünya ";
	mine = ft_strdup(src);
	the = strdup(src);
	printf(": %s:\n: %s:\n", mine, the);
	return (0);
}

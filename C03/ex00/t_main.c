/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:37:38 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/02 10:54:27 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[] = "Yayoooo";
	char	b[] = "Merhaba";
	printf("%d\n",strcmp(a,b));
	printf("%d\n", ft_strcmp(a,b));
	return (0);
}

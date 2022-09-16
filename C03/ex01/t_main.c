/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:01:42 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/03 11:10:34 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	a[]="abaadef";
	char	b[]="abzdgg";
	unsigned int	c = 4;

	printf("%d\n",strncmp(a,b,c));
	printf("%d\n",ft_strncmp(a,b,c));
	return (0);
}

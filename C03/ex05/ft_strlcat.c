/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:23:10 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/02 17:39:37 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s1)
{
	int	a;

	a = 0;
	while (s1[a])
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a])
		a++;
	while (src[b])
		b++;
	if (size <= a)
		b += size;
	else
		b += a;
	while (src[c] && a + 1 < size)
		dest[a++] = src[c++];
	dest[a] = '\0';
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:40:44 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/03 11:11:19 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[a] == s2[a]) && (a < n - 1) && (s1[a] && s2[a]))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

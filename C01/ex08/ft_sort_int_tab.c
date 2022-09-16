/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:18:07 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/27 14:26:18 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size)
	{
		b = 1;
		while (b < (size - a))
		{
			if (tab[b - 1] > tab[b])
			{
				c = tab[b];
				tab[b] = tab[b - 1];
				tab[b - 1] = c;
			}
			b++;
		}
		a++;
	}
}

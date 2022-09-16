/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:49:56 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/27 11:39:31 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	dizin;
	int	deg;

	dizin = 0;
	while (dizin < size / 2)
	{
		deg = tab[dizin];
		tab[dizin] = tab[size - 1 - dizin];
		tab[size - 1 - dizin] = deg;
		dizin++;
	}
}

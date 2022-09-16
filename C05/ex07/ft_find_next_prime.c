/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:09:54 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/05 17:29:46 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_asal(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_asal(nb))
		nb++;
	return (nb);
}

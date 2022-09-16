/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:35:10 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/05 10:53:12 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			a *= nb;
			power--;
		}
	}
	return (a);
}

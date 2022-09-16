/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:55:15 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/04 15:27:06 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_numara(int numara, char *temel, int boyut)
{
	unsigned int	n;
	char			a;

	if (numara < 0)
	{
		write(1, "-", 1);
		n = numara * (-1);
	}
	else
		n = numara;
	if (n >= (unsigned int)(boyut))
		ft_numara(n / boyut, temel, boyut);
	a = temel[n % boyut];
	write(1, &a, 1);
}

int	ft_kontrol(char *temel)
{
	int	k;

	k = 0;
	while (temel[k] != '\0')
	{
		if (temel[k] == '+' || temel[k] == '-' || temel[k] == temel[k - 1])
			return (0);
		k++;
	}
	if (k <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_kontrol(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_numara(nbr, base, s);
	}
}

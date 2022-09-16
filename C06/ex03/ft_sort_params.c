/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:11:53 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/06 15:02:40 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_yazdir(char *dizi)
{
	int	a;

	a = 0;
	while (dizi[a])
	{
		write(1, &dizi[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int	ft_asci(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] == s2[a]) && (s1[a]) && (s2[a]))
		a++;
	return (s1[a] - s2[a]);
}

int	main(int argc, char **argv)
{
	char	*depo;
	int		a;
	int		b;

	a = argc;
	b = 1;
	while (++b <= argc)
	{
		a = 1;
		while (++a <= argc - 1)
		{
			if (ft_asci(argv[a], argv[a - 1]) < 0)
			{
				depo = argv[a];
				argv[a] = argv[a - 1];
				argv[a - 1] = depo;
			}
		}
	}
	b = 0;
	while (++b < argc)
		ft_yazdir(argv[b]);
}

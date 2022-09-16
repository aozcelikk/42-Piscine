/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:54:42 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/06 10:58:39 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	b = 0;
	if (argc > 1)
	{
		while (a > 0)
		{
			b = 0;
			while (argv[a][b])
			{
				write(1, &argv[a][b], 1);
				b++;
			}
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}

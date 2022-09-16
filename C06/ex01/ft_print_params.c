/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:46:40 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/06 10:51:55 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	b = 0;
	a = 1;
	if (argc > 1)
	{
		while (a < argc)
		{
			b = 0;
			while (argv[a][b])
			{
				write(1, &argv[a][b], 1);
				b++;
			}
			write(1, "\n", 1);
			a++;
		}
	}
	return (0);
}

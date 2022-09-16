/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:00:37 by aozcelik          #+#    #+#             */
/*   Updated: 2021/10/27 11:46:40 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	debug_dump_array(int numbers[], int size)
{
	int	index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int	main(void)
{
	int	numbers[4];
	int	*first_pointer;
	int	index;

	index = 0;
	while (index < 4)
	{
		numbers[index] = index + 1;
		index++;
	}
	first_pointer = &numbers[0];
	printf("Önce : ");
	debug_dump_array(numbers, 4);
	ft_rev_int_tab(first_pointer, 4);
	printf("\nSonra : ");
	debug_dump_array(numbers, 4);
}

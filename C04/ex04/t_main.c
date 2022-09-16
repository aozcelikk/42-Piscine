/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:52:59 by aozcelik          #+#    #+#             */
/*   Updated: 2021/11/04 14:58:37 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int	numara = 123;
	char	temel[] = "asdfzxcvqwerjlk";

	ft_putnbr_base(numara,temel);
}

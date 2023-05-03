/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:51:58 by sdiabate          #+#    #+#             */
/*   Updated: 2022/08/28 15:33:18 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int lenght, char start_char, char mid_char, char end_char)
{
	int i;

	i = 1;
	while (i <= lenght)
	{
		if (i == 1)
			ft_putchar(start_char);
		else if (i == lenght)
			ft_putchar(end_char);
		else
			ft_putchar(mid_char);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		while (i <= y)
		{
			if (i == 1)
				print_line(x, 'A', 'B', 'C');
			else if (i == y)
				print_line(x, 'A', 'B', 'C');
			else
				print_line(x, 'B', ' ', 'B');
			i++;
		}
	}
}

int	main(void)
{
	rush(2, 5);
}

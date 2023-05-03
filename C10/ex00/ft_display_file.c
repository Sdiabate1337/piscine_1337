/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:57:52 by sdiabate          #+#    #+#             */
/*   Updated: 2022/09/14 05:16:23 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_display_file(int fd)
{
	char	*buff;

	while (read(fd, &buff, 1) > 0)
		write(1, &buff, 1);
}

int	main(int ac, char **av)
{
	int		fd;
	int		i;

	i = 0;
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY, 0);
		if (fd == -1)
			write(2, "Cannot read file.\n", 18);
		else
			ft_display_file(fd);
		close(fd);
	}
	return (0);
}

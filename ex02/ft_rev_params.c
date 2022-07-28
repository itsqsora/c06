/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:02:18 by mac               #+#    #+#             */
/*   Updated: 2022/07/27 03:05:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	puts(char c)
{
	write(1, &c, 1);
	return (0);
}

int	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		puts(str[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			putstr(argv[i]);
			puts('\n');
			i--;
		}
	}
	return (0);
}

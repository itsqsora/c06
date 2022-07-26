/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:18:31 by mac               #+#    #+#             */
/*   Updated: 2022/07/27 03:23:18 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	put_char(char c)
{
	write(1, &c, 1);
	return (0);
}

int	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
	put_char('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	if (argv[0] && argc > 0)
		put_str(argv[0]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlamiel- <xlamiel-@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:35:31 by xlamiel-          #+#    #+#             */
/*   Updated: 2025/07/23 20:13:16 by xlamiel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	size_t i;

	i = 0;
	if (argc != 2 || argv[1][i] == '\0')
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i + 1] == 32 || argv[1][i + 1] == '\t' || argv[1][i + 1] == '\0')
			{
				write(1, "\n", 1);
				return (0);
			}
		}
		i++;
	}
	return (0);
}

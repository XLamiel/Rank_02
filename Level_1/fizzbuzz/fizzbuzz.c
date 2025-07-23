/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlamiel- <xlamiel-@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 21:41:01 by xlamiel-          #+#    #+#             */
/*   Updated: 2025/07/23 23:13:25 by xlamiel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_free_and_null(char **prt)
{
	if (*prt)
	{
		free(*prt);
		*prt = ((void *) 0);
	}
	return ((void *) 0);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	lens1s2;
	char	*strjoin;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	lens1s2 = ft_strlen(s1) + ft_strlen(s2);
	strjoin = (char *)malloc(lens1s2 + 1);
	if (!strjoin)
		return ((void *) 0);
	while (s1[i])
		strjoin[i] = s1[i++];
	while (s2[j])
		strjoin[i + j] = s2[j++];
	strjoin[i + j] = '\0';
	return (strjoin);
}

char	*ft_itos(i)
{
	static char	*s;
	char	*tmp;

	if (i > 10)
	{
		if (s)
		{
			tmp = s;
		}
	}
}


int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		ft_itos(i);
	}
	return (0);
}

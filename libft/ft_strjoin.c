/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:38:31 by frocha-b          #+#    #+#             */
/*   Updated: 2025/06/26 15:50:47 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*string;
	size_t	str_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(s1) + ft_strlen(s2);
	string = malloc (sizeof (char) * (str_len + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		string[j + i] = s2[i];
		i++;
	}
	string[j + i] = '\0';
	return (string);
}

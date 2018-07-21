/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sechang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:29:57 by sechang           #+#    #+#             */
/*   Updated: 2018/07/19 11:20:42 by sechang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	while (*s2)
	{
		*(s1 + s1_len) = *s2;
		s1_len++;
		s2++;
	}
	*(s1 + s1_len) = '\0';
	return (s1);
}

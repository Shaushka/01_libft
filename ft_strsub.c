/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:30:36 by mguillon          #+#    #+#             */
/*   Updated: 2015/01/29 13:37:13 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*dst;

	i = start;
	j = 0;
	dst = ft_strnew(len);
	if (dst && s)
	{
		while (i < start + len && s[i] != '\0')
		{
			dst[j] = s[i];
			i++;
			j++;
		}
		return ((char*)dst);
	}
	return (NULL);
}

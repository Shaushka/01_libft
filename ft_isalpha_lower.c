/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:13:09 by mguillon          #+#    #+#             */
/*   Updated: 2014/11/04 15:17:12 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha_lower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

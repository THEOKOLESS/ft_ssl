/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:50:37 by amartino          #+#    #+#             */
/*   Updated: 2019/02/26 16:39:10 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	if (!*needle)
		return ((char*)haystack);
	while (len > 0 && *haystack)
	{
		j = 0;
		while (haystack[j] == needle[j] && haystack[j] && needle[j] && j < len)
			j++;
		if (!needle[j])
			return ((char*)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}

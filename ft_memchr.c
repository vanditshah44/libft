/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vashah <vashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 01:00:51 by vashah            #+#    #+#             */
/*   Updated: 2025/01/11 01:00:58 by vashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	char			ch;
	size_t			i;

	i = 0;
	str = (char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		++i;
	}
	return (0);
}

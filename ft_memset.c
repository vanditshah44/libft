/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vashah <vashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:56:55 by vashah            #+#    #+#             */
/*   Updated: 2025/01/11 00:03:13 by vashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*mem;
	unsigned char	ch;
	size_t			i;

	i = 0;
	mem = (char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		mem[i] = ch;
		++i;
	}
	return (b);
}

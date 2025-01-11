/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vashah <vashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 01:07:02 by vashah            #+#    #+#             */
/*   Updated: 2025/01/11 01:07:15 by vashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	s1_len = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		++start;
	end = s1_len - 1;
	while (ft_strchr(set, s1[end]) && end >= start)
		--end;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

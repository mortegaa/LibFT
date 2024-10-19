/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:39:48 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/21 17:41:29 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(s);
	while (++i <= len)
		if (s[len - i] == (unsigned char)c)
			return ((char *)&s[len - i]);
	return (0);
}

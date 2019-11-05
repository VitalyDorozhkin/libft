/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pparalax <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:34:08 by pparalax          #+#    #+#             */
/*   Updated: 2019/09/05 20:34:10 by pparalax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strndup(const char *src, int n)
{
	int		i;
	char	*str;
	int		len;

	len = ft_strlen(src);
	n = (n > len) ? len : n;
	str = (char*)malloc((n + 1) * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	while (src[++i] != '\0' && i < n)
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}

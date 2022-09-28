/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpachec <adpachec@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:25:06 by adpachec          #+#    #+#             */
/*   Updated: 2022/09/16 13:25:06 by adpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		++s1;
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		--i;
	return (ft_substr(s1, 0, i + 1));
}

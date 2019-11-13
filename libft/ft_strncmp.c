/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:02:34 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/12 12:58:47 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i] && i < (n - 1))
		i++;
	if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
		return (s2[i] - s1[i]);
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
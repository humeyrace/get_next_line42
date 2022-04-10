/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:41:36 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/24 13:33:32 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str, char *tmp_str)
{
	int		i;
	int		j;
	char	*arr;

	arr = (char *)malloc(sizeof(char) * ft_strlen(str) + BUFFER_SIZE + 1);
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (str && str[i] != '\0')
		arr[j++] = str[i++];
	i = 0;
	while (tmp_str[i] != '\0')
		arr[j++] = tmp_str[i++];
	arr[j] = '\0';
	free (str);
	return (arr);
}

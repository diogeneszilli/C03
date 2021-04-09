/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:18:49 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/09 22:53:28 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int i;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	if (size > 0)
	{
		while (i < (dest_size + size - 1))
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
	}
	return (dest_size + size);
}

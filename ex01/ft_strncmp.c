/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:38:51 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/12 21:31:46 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (((i < n) && (s1[i] && s2[i]) &&
					(s1[i] == s2[i])) && (s1[i] == '\0' && s2[i] == '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

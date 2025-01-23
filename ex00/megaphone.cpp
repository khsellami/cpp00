/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:36:37 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/30 14:55:15 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	j;
	int	i;
	char c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				c = toupper(av[i][j]);
				std::cout << c;
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:21 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/30 15:58:30 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter your cmd: (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "")
			continue ;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
		{
			if (phonebook.getindex() == 0)
				std::cout << "PhoneBook is empty" << std::endl;
			else
				phonebook.searchContact();
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}

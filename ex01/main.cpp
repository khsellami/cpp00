/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:21 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/25 17:55:47 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter your cmd: (ADD, SEARCH, EXIT) : " << std::endl;
		std::cin >> cmd;
		
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
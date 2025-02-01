/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:34 by ksellami          #+#    #+#             */
/*   Updated: 2025/02/01 13:11:09 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	currentIndex = 0;
}

int valid_phone_number(std::string phone)
{
	int i = 0;
	while (phone[i])
	{
		if (!std::isdigit(phone[i]))
			return (0);
		i++;
	}
	return (1);
}

int only_spaces(std::string s)
{
	int i = 0;

	while (s[i])
	{
		if (!std::isspace(s[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string	read_line(std::string str, std::string name)
{
	if (getline(std::cin, str).eof())
		return ;
	while (str.empty() || only_spaces(str))
	{
		std::cout << "Contact cannot have any empty field." << std::endl << name;
		if (getline(std::cin, str).eof())
			return ;
	}
	return (str);
}

void PhoneBook::addContact()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	std::cout << "Enter firstname: ";
	firstname = read_line(firstname, "Enter firstname: ");

	std::cout << "Enter lastname: ";
	lastname = read_line(lastname, "Enter lastname: ");

	std::cout << "Enter nickname: ";
	nickname = read_line(nickname, "Enter nickname: ");

	std::cout << "Enter phonenumber: ";
	phonenumber = read_line(phonenumber, "Enter phonenumber: ");
	while(!valid_phone_number(phonenumber))
	{
		std::cout << "Invalid phone number" << std::endl;
		std::cout << "Enter phonenumber: ";
		phonenumber = read_line(phonenumber, "Enter phonenumber: ");
	}

	std::cout << "Enter darkestsecret: ";
	darkestsecret = read_line(darkestsecret, "Enter darkestsecret: ");

	contacts[currentIndex].setFirstname(firstname);
	contacts[currentIndex].setlastname(lastname);
	contacts[currentIndex].setnickname(nickname);
	contacts[currentIndex].setphonenumber(phonenumber);
	contacts[currentIndex].setdarkestsecret(darkestsecret);
	std::cout << "Contact added successfully!" << std::endl;
	currentIndex = (currentIndex + 1) % 8;
}

std::string truncateString(std::string str, size_t maxLength)
{
	if (str.length() > maxLength)
		return (str.substr(0, maxLength - 1) + ".");
	return str;
}

int	check_empty(Contact contact)
{
	if (contact.getdarkestsecret().empty() && contact.getfirstname().empty()
		&& contact.getlastname().empty() && contact.getnickname().empty()
		&& contact.getphonenumber().empty())
		return (1);
	return (0);
}

void PhoneBook::searchContact()
{
	std::cout << std::setw(10) << std::right << "Index" 
			  << " | " 
			  << std::setw(10) << std::right << "Firstname" 
			  << " | " 
			  << std::setw(10) << std::right << "Lastname" 
			  << " | " 
			  << std::setw(10) << std::right << "Nickname" 
			  << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) <<  std::right << i << " | " ;
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getfirstname(), 10) << " | " ;
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getlastname()) << " | " ;
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getnickname()) << std::endl;
	}
	std::string	index;
	std::cout << "Enter the index: ";
	index = read_line(index, "Enter the index: ");
	if (index.length() > 1 || index[0] == '\0')
	{
		std::cout << "Wrong index!" << std::endl;
		return ;
	}
	int i = index[0] - '0';
	if (i < 0 || i > 7)
	{
		std::cout << "Wrong index!" << std::endl;
		return ;
	}
	if (check_empty(contacts[i]))
	{
		std::cout << "Index empty!" << std::endl;
		return ;
	}
	std::cout << "Contact details at index " << i << std::endl;
	std::cout << "First Name: " << contacts[i].getfirstname() <<  std::endl;
	std::cout << "Last Name: " << contacts[i].getlastname() <<  std::endl;
	std::cout << "Nickname: " << contacts[i].getnickname() <<  std::endl;
	std::cout << "Phone Number: " << contacts[i].getphonenumber() <<  std::endl;
	std::cout << "Darkest Secret: " << contacts[i].getdarkestsecret() <<  std::endl;
}

int PhoneBook::getindex()
{
	return (this->currentIndex);
}

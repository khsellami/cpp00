/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:25 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/25 19:05:01 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//setters
void Contact::setFirstname(std::string firstname)
{
	this->firstname = firstname;
}

void Contact::setlastname(std::string lastname)
{
	this->lastname = lastname;
}

void Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setphonenumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
}

void Contact::setdarkestsecret(std::string darkestsecret)
{
	this->darkestsecret = darkestsecret;
}

//getters
std::string Contact::getfirstname()
{
	return firstname;
}

std::string Contact::getlastname()
{
	return lastname;
}

std::string Contact::getnickname()
{
	return nickname;
}

std::string Contact::getphonenumber()
{
	return phonenumber;
}

std::string Contact::getdarkestsecret()
{
	return darkestsecret;
}

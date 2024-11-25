/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:28 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/25 20:11:17 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//important add constructor to the class where we initialize contact with empty
class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
	public:
	//setters
		void setFirstname(std::string firstname);
		void setlastname(std::string lastname);
		void setnickname(std::string nickname);
		void setphonenumber(std::string phonenumber);
		void setdarkestsecret(std::string darkestsecret);
	//getters
		std::string getfirstname();
		std::string getlastname();
		std::string getnickname();
		std::string getphonenumber();
		std::string getdarkestsecret();
	
};

/*The header file is used to declare the interface of a class, structure, or set of functions. It contains:

Class declarations (without implementation).
Function declarations (prototypes).
Member variable declarations.
Include guards or #pragma once to prevent multiple inclusions.*/
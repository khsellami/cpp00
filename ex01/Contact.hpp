/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:28 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/30 13:34:24 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
	public:
		void setFirstname(std::string firstname);
		void setlastname(std::string lastname);
		void setnickname(std::string nickname);
		void setphonenumber(std::string phonenumber);
		void setdarkestsecret(std::string darkestsecret);
		std::string getfirstname();
		std::string getlastname();
		std::string getnickname();
		std::string getphonenumber();
		std::string getdarkestsecret();
};

#endif

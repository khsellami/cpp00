/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:37 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/30 16:14:14 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int currentIndex;

    public:
        PhoneBook();
        void addContact();
        void searchContact();
        int getindex();
};
std::string truncateString(std::string str, size_t maxLength);
int valid_phone_number(std::string phone);
int only_spaces(std::string s);

#endif
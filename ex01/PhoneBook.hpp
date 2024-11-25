/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:37 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/25 19:23:31 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//classe PhoneBook
// It has an array of contacts
// It can store a maximum of 8 contacts
// Contact contacts[8];
// Syntaxe Générale
/*
class NomDeClasse {
private: // Section privée (optionnelle)
    // Attributs et méthodes accessibles uniquement dans la classe
public: // Section publique (optionnelle)
    // Attributs et méthodes accessibles depuis l'extérieur
protected: // Section protégée (optionnelle)
    // Attributs et méthodes accessibles dans la classe et ses sous-classes
};
*/

#include "Contact.hpp"
class PhoneBook
{
    private:
        Contact contacts[8];
        int currentIndex; // Tracks the next position to insert a contact

    public:
        PhoneBook();
        void addContact();
        void searchContact();
};
std::string truncateString(std::string str, size_t maxLength);


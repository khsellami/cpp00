/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:34 by ksellami          #+#    #+#             */
/*   Updated: 2024/11/25 20:15:15 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
//important : add test empty or only spaces to fiels entered in method add contact
//important:check phone number
//constructor class
PhoneBook::PhoneBook()
{
	currentIndex = 0;
}

//ADD
//reste a impementer : A saved contact can’t have empty fields.
void PhoneBook::addContact()
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	
	std::cout << "Enter firstname: ";
    std::cin >> firstname;
	std::cout << "Enter lastname: ";
	std::cin >> lastname;
	std::cout << "Enter nickname: ";
	std::cin >> nickname;
	std::cout << "Enter phonenumber: ";
	std::cin >> phonenumber;
	std::cout << "Enter darkestsecret: ";
	std::cin >> darkestsecret;
	//ADD CONTACT TO the array table
	contacts[currentIndex].setFirstname(firstname);
	contacts[currentIndex].setlastname(lastname);
	contacts[currentIndex].setnickname(nickname);
	contacts[currentIndex].setphonenumber(phonenumber);
	contacts[currentIndex].setdarkestsecret(darkestsecret);
	std::cout << "Contact added successfully!" << std::endl;
	// currentIndex++;
	//If the user tries to add a 9th contact,
	// replace the oldest one by the new one
	currentIndex = (currentIndex + 1) % 8;
	// Ajout des 8 premiers contacts :
	// contacts[0] = "Contact 1"
	// contacts[1] = "Contact 2"
	// ...
	// contacts[7] = "Contact 8"

	// Ajout du 9ème contact :
	// contacts[0] = "Contact 9"  // Remplace "Contact 1"
	// contacts[1] = "Contact 2"
	// ...
	// contacts[7] = "Contact 8"


}

// Function to truncate text if it is too long
std::string truncateString(std::string str, size_t maxLength)
{
    if (str.length() > maxLength)
        return str.substr(0, maxLength - 1) + ".";  // Truncate and add a dot
    return str;
}
//important check ila darena enter index fi  search et on a acucun contact
//important:verifier difference between getline and std::cin
//check makefile o wash rase diri fi file .hpp #ifndef #define
void PhoneBook::searchContact()
{
	// std::cout << "Inside searchContact Method" << std::endl;
	// Affichage de l'en-tête
    std::cout << std::setw(10) << std::right << "Index" 
              << " | " 
              << std::setw(10) << std::right << "Firstname" 
              << " | " 
              << std::setw(10) << std::right << "Lastname" 
              << " | " 
              << std::setw(10) << std::right << "Nickname" 
              << std::endl;

    // Ligne de séparation
    std::cout << "---------------------------------------------" << std::endl;
	//Each column must be 10 characters wide
	/*
	L'exigence "Each column must be 10 characters wide" 
	signifie que vous devez formater l'affichage 
	des informations de manière à ce que chaque colonne 
	(par exemple, prénom, nom, surnom, etc.) 
	occupe exactement 
	10 caractères d'espace dans le terminal.
	En C++, vous pouvez utiliser la fonction std::setw() de la bibliothèque <iomanip>. Cette fonction permet de définir la largeur du champ (en termes de caractères) pour l'affichage d'une valeur. */
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) <<  std::right << i << " | " ;
		std::cout << std::setw(10) << std::right << truncateString(contacts[i].getfirstname(), 10) << " | " ;
		std::cout << std::setw(10) << std::right <<contacts[i].getlastname() << " | " ;
		std::cout << std::setw(10) << std::right <<contacts[i].getnickname() << std::endl;
	}
	/*If the text is longer than the column,
	it must be truncated and the last displayable character must be replaced by a
	dot (’.’)*/
	/*
	Le terme "truncated" en anglais signifie "tronqué" en français. Il décrit le processus où une partie d'une chaîne de caractères (ou d'un texte) est coupée ou réduite pour respecter une certaine limite de taille.

	Dans le contexte de ton programme, "truncater" signifie que si une chaîne de texte dépasse une longueur spécifique (par exemple 10 caractères), on supprime les caractères excédentaires et on garde seulement les premiers caractères autorisés (par exemple les 9 premiers caractères), puis on ajoute un point (.) 
	à la fin pour signaler que le texte a été raccourci.*/
	
	//////
	int index_entry;
	std::cout << "Enter index entry to display(0-7):";
	std::cin >> index_entry;
	//important : check if index_entry is empty or only spaces
	if (index_entry < 0 || index_entry >= 8)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	/*
	Then, prompt the user again for the index of the entry to display. If the index
	is out of range or wrong, define a relevant behavior. Otherwise, display the
	contact information, one field per line.*/
	// Affichage des informations du contact correspondant
    std::cout << "Contact details at index " << index_entry << std::endl;
    std::cout << "First Name: " << contacts[index_entry].getfirstname() << std::endl;
    std::cout << "Last Name: " << contacts[index_entry].getlastname() << std::endl;
    std::cout << "Nickname: " << contacts[index_entry].getnickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index_entry].getphonenumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index_entry].getdarkestsecret() << std::endl;
	

}

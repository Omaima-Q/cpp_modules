/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:59:34 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2025/12/19 21:00:09 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
    currentIndex = 0;
    totalContacts = 0;
}

PhoneBook::~PhoneBook() {
}

std::string PhoneBook::truncate(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayAllContacts() const {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    
    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::addContact() {
    std::string input;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Field cannot be empty!" << std::endl;
        return;
    }
    contacts[currentIndex].setFirstName(input);
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Field cannot be empty!" << std::endl;
        return;
    }
    contacts[currentIndex].setLastName(input);
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Field cannot be empty!" << std::endl;
        return;
    }
    contacts[currentIndex].setNickname(input);
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Field cannot be empty!" << std::endl;
        return;
    }
    contacts[currentIndex].setPhoneNumber(input);
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Field cannot be empty!" << std::endl;
        return;
    }
    contacts[currentIndex].setDarkestSecret(input);
    
    std::cout << "Contact added successfully!" << std::endl;
    
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
}

void PhoneBook::searchContact() {
    if (totalContacts == 0) {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }
    
    displayAllContacts();
    
    std::cout << "Enter index to display: ";
    int index;
    std::cin >> index;
    
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid input!" << std::endl;
        return;
    }
    
    std::cin.ignore(10000, '\n');
    
    if (index < 0 || index >= totalContacts) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    
    std::cout << "\nFirst Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

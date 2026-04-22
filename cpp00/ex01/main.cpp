/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:46:33 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2025/12/19 20:46:35 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;
    
    while (true) {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (command == "ADD") {
            phoneBook.addContact();
        }
        else if (command == "SEARCH") {
            phoneBook.searchContact();
        }
        else if (command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        // Any other input is ignored
    }
    
    return 0;
}
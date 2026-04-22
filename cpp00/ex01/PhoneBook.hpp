/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 21:01:18 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2025/12/19 21:01:30 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"  // ⭐ THIS LINE MUST BE HERE!
#include <string>

class PhoneBook {
private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;
    
    std::string truncate(std::string str) const;
    void displayAllContacts() const;

public:
    PhoneBook();
    ~PhoneBook();
    
    void addContact();
    void searchContact();
};

#endif
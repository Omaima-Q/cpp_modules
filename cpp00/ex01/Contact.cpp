/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:16:43 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2026/07/27 01:22:16 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
    firstName = " ";
    lastName = " ";
    nickname = " ";
    phoneNumber = 0;
    darkestSecret = " ";
}

Contact::~Contact() {
}

void Contact::setFirstName(std::string str) {
    firstName = str;
}

void Contact::setLastName(std::string str) {
    lastName = str;
}

void Contact::setNickname(std::string str) {
    nickname = str;
}

void Contact::setPhoneNumber(int num) {
    phoneNumber = num;
}

void Contact::setDarkestSecret(std::string str) {
    darkestSecret = str;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

int Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

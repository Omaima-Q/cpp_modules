/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:06:22 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2026/07/27 01:26:40 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    int phoneNumber;
    std::string darkestSecret;
    
public:
    Contact();
    ~Contact();
    
    void setFirstName(std::string str);
    void setLastName(std::string str);
    void setNickname(std::string str);
    void setPhoneNumber(int num);
    void setDarkestSecret(std::string str);
    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    int getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

#endif
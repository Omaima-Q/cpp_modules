/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:45:19 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2026/07/19 21:12:32 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]);
        for (size_t j = 0; j < s.length(); j++)
        {
            std::cout << (char)std::toupper(s[j]);
        }
        if (i < argc - 1) 
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
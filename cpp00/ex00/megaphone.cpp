/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaimaqaroot <omaimaqaroot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:45:19 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2026/04/22 14:18:10 by omaimaqaroo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //the library for input, output operations 
#include <cctype>   // we use this library for functions that perform character handling like toupper function and etc
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]); // Initialize string from char*
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
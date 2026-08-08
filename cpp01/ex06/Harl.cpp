#include <iostream>
#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*
** Turns the level string into a number, then uses a switch WITHOUT
** break statements between the cases we want. That deliberate
** fallthrough is what gives us "this level and everything above it":
** starting at DEBUG (0) runs all four functions in order, starting
** at WARNING (2) skips straight to warning() and error().
*/
void Harl::complain( std::string level )
{
	int levelCode;

	if ( level == "DEBUG" )
		levelCode = 0;
	else if ( level == "INFO" )
		levelCode = 1;
	else if ( level == "WARNING" )
		levelCode = 2;
	else if ( level == "ERROR" )
		levelCode = 3;
	else
		levelCode = -1;

	switch ( levelCode )
	{
		case 0:
			debug();
			/* fall through */
		case 1:
			info();
			/* fall through */
		case 2:
			warning();
			/* fall through */
		case 3:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

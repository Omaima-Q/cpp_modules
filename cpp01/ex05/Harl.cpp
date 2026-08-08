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
** Instead of a forest of if/else, we build a small lookup table
** pairing each level name with a pointer to the matching member
** function. complain() just scans the table for the right name and
** invokes the stored function pointer through `this` via the
** .* operator.
*/
void Harl::complain( std::string level )
{
	struct LevelEntry
	{
		std::string	name;
		void		(Harl::*action)( void );
	};

	LevelEntry levels[4] = {
		{ "DEBUG",   &Harl::debug },
		{ "INFO",    &Harl::info },
		{ "WARNING", &Harl::warning },
		{ "ERROR",   &Harl::error }
	};

	for ( int i = 0; i < 4; i++ )
	{
		if ( levels[i].name == level )
		{
			( this->*( levels[i].action ) )();
			return ;
		}
	}
	std::cout << "[ " << level << " ]" << std::endl;
	std::cout << "Unknown level. Harl doesn't know how to complain about that (yet)." << std::endl;
}

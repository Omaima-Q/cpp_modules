#include <iostream>
#include "HumanB.hpp"

/*
** HumanB may or may not have a weapon: it can be created unarmed and
** given a weapon later, or never given one at all. A reference can't
** represent "no weapon" (it must always refer to something valid),
** but a pointer can be NULL. So a pointer (Weapon*) is the right
** tool here, letting us represent the "unarmed" state safely.
*/
HumanB::HumanB( std::string name ) : _name( name ), _weapon( 0 )
{
}

HumanB::~HumanB( void )
{
}

void HumanB::setWeapon( Weapon& weapon )
{
	_weapon = &weapon;
}

void HumanB::attack( void )
{
	if ( _weapon )
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}

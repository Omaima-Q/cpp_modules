#include <iostream>
#include "HumanA.hpp"

/*
** HumanA is ALWAYS armed: a weapon is mandatory from the moment it
** exists, and it will always refer to a valid Weapon (never NULL).
** That's exactly what a reference guarantees: it must be bound at
** construction and can never be reseated or left empty. So a
** reference (Weapon&) is the right tool here, not a pointer.
*/
HumanA::HumanA( std::string name, Weapon& weapon ) : _name( name ), _weapon( weapon )
{
}

HumanA::~HumanA( void )
{
}

void HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

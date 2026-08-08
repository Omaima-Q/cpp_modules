#include <iostream>
#include "Zombie.hpp"
 
Zombie::Zombie( void ) : _name( "unnamed" )
{
}
 
Zombie::Zombie( std::string name ) : _name( name )
{
}
 
Zombie::~Zombie( void )
{
	std::cout << _name << " has been destroyed. Rest in pieces." << std::endl;
}
 
void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
 
void Zombie::setName( std::string name )
{
	_name = name;
}
 
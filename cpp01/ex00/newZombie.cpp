
#include "Zombie.hpp"
 
/*
** newZombie allocates the Zombie on the HEAP.
** It has to, because the Zombie is returned as a pointer and must
** stay alive after this function's scope ends. A stack-allocated
** Zombie would be destroyed the moment the function returns, leaving
** the caller with a dangling pointer.
** Whoever calls newZombie() becomes responsible for deleting the
** returned Zombie once it's no longer needed.
*/
Zombie* newZombie( std::string name )
{
	Zombie* zombie = new Zombie( name );
	return ( zombie );
}
 
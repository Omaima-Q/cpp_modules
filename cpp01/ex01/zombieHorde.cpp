
/*
** Allocates N Zombie objects in ONE single allocation (new Zombie[N]),
** as opposed to N separate allocations. This calls the default
** constructor on each element, so we then loop through and give each
** one its name via setName().
** Returns a pointer to the first zombie in the array; the caller is
** responsible for freeing the whole block with delete[] once done.
*/
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];

	for ( int i = 0; i < N; i++ )
		horde[i].setName( name );

	return ( horde );
}

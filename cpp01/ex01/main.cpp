#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
	int const hordeSize = 5;

	std::cout << "Summoning a horde of " << hordeSize << "..." << std::endl;
	Zombie* horde = zombieHorde( hordeSize, "name");

	for ( int i = 0; i < hordeSize; i++ )
		horde[i].announce();

	// Since the horde was allocated in a single `new Zombie[N]` call,
	// it must be freed with `delete[]`, not `delete`, or the behavior
	// is undefined (and most likely a leak / crash).
	delete [] horde;

	return ( 0 );
}

#include "Zombie.hpp"

//Zombie* newZombie( std::string name );
//void randomChump( std::string name );

int main()
{
	// Stack: zombie lives and dies inside randomChump()
    std::string _name = "Stack Mary";
	randomChump(_name);

	// Heap: zombie survives past newZombie()'s scope, so we own it
	// and must delete it ourselves once we're done with it.
    std::string name = "Heap Sally";
	Zombie* heapZombie = newZombie( "Heap Sally" );
	heapZombie->announce();
	delete heapZombie;

	return ( 0 );
}

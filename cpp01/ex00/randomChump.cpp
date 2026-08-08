
#include "Zombie.hpp"
 
/*
** randomChump allocates the Zombie on the STACK.
** The Zombie is only used inside this function (created, then made
** to announce itself), so it never needs to outlive the function's
** scope. Using the stack here is simpler and safer: the Zombie is
** automatically destroyed when the function returns, with no need
** to remember to delete anything.
*/
void randomChump( std::string name )
{
	Zombie zombie( name );
	zombie.announce();
}
 
#include "Replace.hpp"

/*
** Builds a brand new string, copying chunks from `content` and
** splicing in `s2` wherever `s1` is found, using only find()/substr()/
** append() — std::string::replace() is off-limits for this exercise.
*/
std::string replaceAll( const std::string& content, const std::string& s1, const std::string& s2 )
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	while ( ( found = content.find( s1, pos ) ) != std::string::npos )
	{
		result.append( content.substr( pos, found - pos ) );
		result.append( s2 );
		pos = found + s1.length();
	}
	result.append( content.substr( pos ) );
	return ( result );
}

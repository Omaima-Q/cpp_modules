#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Replace.hpp"

int main( int argc, char** argv )
{
	if ( argc != 4 )
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return ( 1 );
	}

	std::string	filename( argv[1] );
	std::string	s1( argv[2] );
	std::string	s2( argv[3] );

	if ( s1.empty() )
	{
		std::cerr << "Error: s1 must not be an empty string." << std::endl;
		return ( 1 );
	}

	std::ifstream inputFile( filename.c_str() );
	if ( !inputFile.is_open() )
	{
		std::cerr << "Error: could not open file \"" << filename << "\"." << std::endl;
		return ( 1 );
	}

	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	if ( inputFile.bad() )
	{
		std::cerr << "Error: failed while reading \"" << filename << "\"." << std::endl;
		return ( 1 );
	}
	inputFile.close();

	std::string content = buffer.str();
	std::string result = replaceAll( content, s1, s2 );

	std::string	outFilename = filename + ".replace";
	std::ofstream outputFile( outFilename.c_str() );
	if ( !outputFile.is_open() )
	{
		std::cerr << "Error: could not create file \"" << outFilename << "\"." << std::endl;
		return ( 1 );
	}

	outputFile << result;
	outputFile.close();

	std::cout << "Replaced all occurrences of \"" << s1 << "\" with \"" << s2
		<< "\" -> " << outFilename << std::endl;

	return ( 0 );
}

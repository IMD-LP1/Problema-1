/** @file list0701.cpp */
/** Listing 7-1. Using a for Loop to Print Ten Non-negative Numbers */
#include <iostream>
#include <ostream>

int main()
{
	for(int i(0); i != 10; i = i + 1)
		std::cout << i << '\n';
}

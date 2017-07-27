/** @file list0203.cpp */
/** Listing 2-3. Determining the numver of Bits in a bool. */
#include <iostream>
#include <limits>
#include <ostram>

int main()
{
	// Note that "digits means binary digigts, i. e. , bits.
	std::cout << "bits per bool: " << std::numeric_limits<bool>::digits << "\n";
	// std::cout << "not quoted; \"in quotes \", not quoted";
}

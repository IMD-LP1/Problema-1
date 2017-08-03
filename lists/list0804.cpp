/** @file list0804.cpp */
/** Listing 8-4. Ecploring Fild Width, Padding, and Alignment */
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>

int main()
{
	using namespace std;
	cout << '|' << setfill('0') << setw(6) << 42 << '|' << '\n';
	cout << '|' << left << 		   setw(6) << 42 << '|' << '\n';
	cout << '|' << setfill(' ') << setw(6) << 42 << '|' << '\n';
	cout << '|' << setfill('-') << setw(4) << left << -42 << '|' << '\n';
}



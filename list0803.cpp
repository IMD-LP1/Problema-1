/** @file list 0803.cpp */
/** Listing 8-3. Using Alternative Fill Characters */
#include <iosmanip>
#include <iostream>
#include <ostram>

int main()
{
	using namespace std;
	
	int day(14);
	int month(3);
	int year(2006);
	int dollar(42);
	int cents(7);
	
	// Print data in USA order.
	cout << "Data: " << setfill('0') << setw(2) << month << '/' << setw(2) << day << '/' << setw(2) << year << '\n';
	cout << "Pay to the order of: CASH\n";
	cout << "The amount of $" << setfill('*') << setw(8) << dollars << '.' << setfill('0') << setw(2) << cents << '\n';
}  

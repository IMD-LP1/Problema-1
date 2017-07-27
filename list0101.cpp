/// Sort the standard input alphabetically
/// Read lines of text, sort them, and print the results to the standart output
/// If the command line name a file, read from that file. Otherwise, read from
/// the standard input. The entire input is stored in memory, so don't try this with input files that exceed available RAM.

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void read(std::istream& in, std::vector<std::string> & text) 
{
	std::string line;
	while (std::getline(in, line)
		text.push_back(line);
}

int main(int argc, char* argv[])
{
	// Part 1. Read the entire input 

}

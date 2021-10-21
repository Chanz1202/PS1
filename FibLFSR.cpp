/*
NAME: Hanuman Sai Chanukya Srinivas Chilamkuri
COURSE: Computing IV (COMP 2040)
ASSIGNMENT: PS1a
INSTRUCTOR: Dr. Rykalova
DUE DATE: 20 September 2021
*/

#include <iostream>
#include <string>
#include <sstream>
#include "FibLFSR.hpp"

			
//constructor of FibLFSR class
FibLFSR::FibLFSR(std::string seed)
{
  //to set tap position
  	bits = seed;
}

int FibLFSR::step()
{
  	//XOR the tap position with the left most bit
  	int res = bits[1] ^ bits[2];
  	res = res ^ bits[3];
  	res = res ^ bits[4];

  	//shifting all bits from left
  	std::string::size_type i;
  	std::ostringstream ostring;   
  	
  	//using string streams to add to the the XOR result
  	//for shift every bit to left hand side
  	for(i = 0; (unsigned)i < bits.length() - 1; i++)
  	{
    		ostring << bits[i + 1];
  	}

  	//after shifting, add it to the xor result
  	ostring << res;

  	//saving the updated string
  	bits = ostring.str();
  	
  	return res;
}

//implement k steps
int FibLFSR::generate(int k)
{
  	int x = 0;
  	for(int i = 0; i < k; i++)
  	{
    		x = (x * 2) + step();
  	}
  	return x;
}
std::ostream& operator<< (std::ostream &out, FibLFSR &cFibLFSR)
{
  	out << cFibLFSR.bits;
  	return out;
}

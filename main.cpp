#include <iostream>
#include <sstream>
#include <string>
#include "FibLFSR.hpp"
//testing the FibLFSR class
int main()
{
  	//test case 1
	FibLFSR test("1011011000110110");
	
	std::cout << "test case 1. \n";
  	for(int i = 0; i < 10; i++)
  	{
    		int bit = test.step();
    		std::cout << test << " " << bit << std::endl;
  	}
  	
  	//test case 2
  	FibLFSR test2("00110101");
  	std::cout << "test case 2. \n";
  	for(int j = 0; j < 5; j++)
  	{
    		int bit = test2.step();
    		std::cout << test2 << " " << bit << std::endl;
  	}
  	
  	//test case 3
  	FibLFSR test3("01010101");
  	std::cout << "test case 3. \n";
  	for(int j = 0; j < 7; j++)
  	{
    		int bit = test3.step();
    		std::cout << test3 << " " << bit << std::endl;
  	}
  	return 0;
}

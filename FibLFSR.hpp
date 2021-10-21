#ifndef FibLFSR_HPP
#define FibLFSR_HPP
#include <iostream>
class FibLFSR 
{
	public:
	//constructor for Lib
  		FibLFSR(std::string seed);    	
  		int step();                       	
  		int generate(int k);              	

  		// Overloaded << operator
  		friend std::ostream& operator<< (std::ostream &out, FibLFSR &cFibLFSR);
	private:
  		std::string bits;                 	
};
#endif

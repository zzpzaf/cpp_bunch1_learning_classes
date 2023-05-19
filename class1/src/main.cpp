//main.cpp

#include <stdio.h>
#include <string>
#include "MathUtils.h"

// Definition of printout ("free" function - does not belong to any class neither 
// is declared elsewhere, e.g. in a header file). Definition should be in advance 
// - before using/calling it. Otherwise: error: 'printout' was not declared in this scope; 
void printout(std::string action, int x, int y, double r);

int main(int argc, char *argv[]) { 

	MathUtils m_utils;

	int x, y; 
	double r;

	x=4;
	y=2;


	r = m_utils.addition(x, y);
	// printf("The addition of %d and %d is: %.2f\n", x, y, r);
	printout("addition", x,y,r);

	r = m_utils.substraction(x, y);
	// printf("The substraction of %d and %d is: %.2f\n", x, y, r);
	printout("substraction", x,y,r);

	r = m_utils.multiplication(x, y);
	// printf("The multiplication of %d and %d is: %.2f\n", x, y, r);
	printout("multiplication", x,y,r);
	
	r = m_utils.division(x, y);
	// printf("The division of %d and %d is: %.2f\n", x, y, r);
	printout("division", x,y,r);


	return 0; 


}


void printout(std::string action, int x, int y, double r) { 

	printf("The %s of %d and %d is: %.2f\n", action.c_str(), x, y, r);  

}






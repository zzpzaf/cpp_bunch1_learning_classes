//main.cpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

#include "MathUtils.h"

// Definition of printout ("free" function - does not belong to any class neither 
// is declared elsewhere, e.g. in a header file). Definition should be in advance 
// - before using/calling it. Otherwise: error: 'printout' was not declared in this scope; 
void printout(std::string action, int x, int y, double r);

// Another "free" function declaration (outputs parameters passed in)
void argspassed(int n, char *args[]);



int main(int argc, char *argv[]) { 

	// Parameters are space separared values - not comma separated
	argspassed(argc, argv);


	int x, y; 
	x=4;
	y=2;

	int n = 2;
	if (argc >= n) {
		//std::cout << argv[1] << ", " <<  argv[2] << '\n' <<  '\n';
		x = atoi(argv[1]);
		y = atoi(argv[2]);		
	}
	


	MathUtils mutils;





	double r;





	r = mutils.addition(x, y);
	// printf("The addition of %d and %d is: %.2f\n", x, y, r);
	printout("addition", x,y,r);

	r = mutils.substraction(x, y);
	// printf("The substraction of %d and %d is: %.2f\n", x, y, r);
	printout("substraction", x,y,r);

	r = mutils.multiplication(x, y);
	// printf("The multiplication of %d and %d is: %.2f\n", x, y, r);
	printout("multiplication", x,y,r);
	
	r = mutils.division(x, y);
	// printf("The division of %d and %d is: %.2f\n", x, y, r);
	printout("division", x,y,r);


	return 0; 


}


void printout(std::string action, int x, int y, double r) { 

	printf("The %s of %d and %d is: %.2f\n", action.c_str(), x, y, r);  

}


void argspassed(int c, char *args[]) {

	std::cout << "The name used to start the program: " << args[0];
    
	if (c > 1 ) {
		std::cout << "\nParameters/Arguments passed in are:\n";
  		for (int n = 1; n < c; n++)
    		std::cout << args[n] << ",";
			std::cout << '\n';
	} else {
		std::cout << "\nNo Arguments passed in!\n";
	}
}


